int pre[1000 ];

int find(int x)                                                                                                         //���Ҹ��ڵ�

{

    int r=x;

    while ( pre[r ] != r )                                                                                              //���ظ��ڵ� r

        r=pre[r ];



    int i=x, j ;

    while( i != r )                                                                                                        //·��ѹ��

    {

        j = pre[ i ]; // �ڸı��ϼ�֮ǰ����ʱ����  j ��¼������ֵ

        pre[ i ]= r ; //���ϼ���Ϊ���ڵ�

        i=j;

    }

    return r ;

}





void join(int x,int y)                                                                                                    //�ж�x y�Ƿ���ͨ��

//����Ѿ���ͨ���Ͳ��ù��� //�������ͨ���Ͱ��������ڵ���ͨ��֧�ϲ���,

{

    int fx=find(x),fy=find(y);

    if(fx!=fy)

        pre[fx ]=fy;

}

