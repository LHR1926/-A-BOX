//��һ�ֻ��ֺ���:�Ե�һ������Ϊ��׼ֵ����һ�λ��� ��󷵻ػ�׼���±�
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
		if(low == high)//��������Ȼ�׼ֵС�� �ŵ�low��λ��
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
//�ڶ��ֻ��ֺ���:���ѡȡ��׼����
int part(int *arr,int low,int high)
{
	srand((unsigned)time(NULL));
	//�������λ��
    int pivotPos = rand()%(high - low) + low;
	//�������λ�õ�ֵ��lowλ�õ�ֵ���� �ֿ��Ժ���ͨ���ֺ���һ��
	swap(arr[pivotPos],arr[low]);

	int tmp = arr[low];

	while(low < high)
	{
		while((low < high) && arr[high] >= tmp )
		{
			high--;
		}
		if(low == high)//��������Ȼ�׼ֵС�� �ŵ�low��λ��
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
//�����ֻ��ֺ���
int Select_Mid(int *arr,int low,int high)
{
	//int mid = low + ((high - low) >> 1);//���������м��Ԫ�ص��±�
	int mid = low + ((high - low) >> 1);
    //ʹ������ȡ�з�ѡ������
    if (arr[mid] > arr[high])//Ŀ��: arr[mid] <= arr[high]
    {
        swap(arr[mid],arr[high]);
    }
    if (arr[low] > arr[high])//Ŀ��: arr[low] <= arr[high]
    {
        swap(arr[low],arr[high]);
    }
    if (arr[mid] > arr[low]) //Ŀ��: arr[low] >= arr[mid]
    {
        swap(arr[mid],arr[low]);
    }
	return arr[low];
}
//����ȡ�е�һ�λ���
int part1(int *arr,int low,int high)
{

	int tmp = Select_Mid(arr,low,high);

	while(low < high)
	{
		while((low < high) && arr[high] >= tmp )
		{
			high--;
		}
		if(low == high)//��������Ȼ�׼ֵС�� �ŵ�low��λ��
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

//�ǵݹ� ��ջ����ÿһ�ε�һ��low��high���� �ռ临�Ӷ�ΪO(n*logn)
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

