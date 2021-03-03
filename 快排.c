//第一种划分函数:以第一个数字为基准值进行一次划分 最后返回基准的下标
int partion(int *arr,int low,int high)
{
	if(arr == NULL )
		return -1;
	int tmp = arr[low];

	while(low < high)
	{
		while((low < high) && arr[high] >= tmp)
		{
			high--;
		}
		if(low == high)//如果遇到比基准值小的 放到low的位置
		{
			break;
		}
		else
		{
			arr[low] = arr[high];
		}

		while((low < high) && arr[low] <=  tmp)
		{
			low++;
		}
		if(low == high)
		{
			break;
		}
		else
		{
			arr[high] = arr[low];
		}
	}
	arr[low] = tmp;
	return low;
}
//第二种划分函数:随机选取基准划分
int part(int *arr,int low,int high)
{
	srand((unsigned)time(NULL));
	//产生随机位置
    int pivotPos = rand()%(high - low) + low;
	//将此随机位置的值与low位置的值交换 又可以和普通划分函数一样
	swap(arr[pivotPos],arr[low]);

	int tmp = arr[low];

	while(low < high)
	{
		while((low < high) && arr[high] >= tmp )
		{
			high--;
		}
		if(low == high)//如果遇到比基准值小的 放到low的位置
		{
			break;
		}
		else
		{
			arr[low] = arr[high];
		}

		while((low < high) && arr[low] <=  tmp)
		{
			low++;
		}
		if(low == high)
		{
			break;
		}
		else
		{
			arr[high] = arr[low];
		}
	}
	arr[low] = tmp;
	return low;
}
//第三种划分函数
int Select_Mid(int *arr,int low,int high)
{
	//int mid = low + ((high - low) >> 1);//计算数组中间的元素的下标
	int mid = low + ((high - low) >> 1);
    //使用三数取中法选择枢轴
    if (arr[mid] > arr[high])//目标: arr[mid] <= arr[high]
    {
        swap(arr[mid],arr[high]);
    }
    if (arr[low] > arr[high])//目标: arr[low] <= arr[high]
    {
        swap(arr[low],arr[high]);
    }
    if (arr[mid] > arr[low]) //目标: arr[low] >= arr[mid]
    {
        swap(arr[mid],arr[low]);
    }
	return arr[low];
}
//三数取中的一次划分
int part1(int *arr,int low,int high)
{

	int tmp = Select_Mid(arr,low,high);

	while(low < high)
	{
		while((low < high) && arr[high] >= tmp )
		{
			high--;
		}
		if(low == high)//如果遇到比基准值小的 放到low的位置
		{
			break;
		}
		else
		{
			arr[low] = arr[high];
		}

		while((low < high) && arr[low] <=  tmp)
		{
			low++;
		}
		if(low == high)
		{
			break;
		}
		else
		{
			arr[high] = arr[low];
		}
	}
	arr[low] = tmp;
	return low;
}
static void Quick(int *arr,int start,int end)
{
	int par = part1(arr,start,end);
	if(par > start + 1)
	{
		Quick(arr,start,par-1);
	}
	if(par < end -1)
	{
		Quick(arr,par+1,end);
	}
}
void Quick_Sort1(int *arr,int len)
{
	if(arr == NULL ||len < 0)
		return;
	for(int i = 0 ;i < len - 1 ;++i)
	{
		Quick(arr,0,len-1);
	}
}

//非递归 用栈保存每一次的一对low和high区间 空间复杂度为O(n*logn)
void Quick_Sort2(int *arr,int len)
{
	if( arr == NULL ||len < 0)
		return ;
	int low = 0;
	int high = len - 1;
	int par =  partion(arr,low,high);
	stack<int> st;
	if(par > low + 1)
	{
		st.push(low);
		st.push(par-1);
	}
	if(par < high - 1)
	{
		st.push(par+1);
		st.push(high);
	}
	while(!st.empty())
	{
		int high = st.top();st.pop();
		int low = st.top();st.pop();
		int par = partion(arr,low,high);
		if(par > low + 1)
		{
			st.push(low);
			st.push(par-1);
	}
	if(par < high - 1)
	{
		st.push(par+1);
		st.push(high);
	}
	}
}

