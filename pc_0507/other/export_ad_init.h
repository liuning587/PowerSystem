/*����ͼ��ʼ��
����һ��Input_Channel_Map�ṹ��
�����Ӧ������Input_Channel�ṹ������
��Input_Channel_Map�ṹ���ڵ�ָ��*p_input_channle��Input_Channel�ṹ�������ַ����
����Fun_Channel_Map_Init( Input_Channel_Map * p )����ʼ������map��
*/


//ͨ������λ�õ���ϸ˵���ṹ�壬��ʼ����������ʱ���ȶ��岢��ʼ�������ܸ����ĸýṹ�壬
//Ȼ�󽫸ýṹ�����ָ�븶��*p_input_channle
//===============================================================
typedef  struct 
{
	unsigned char  uc_phase_number ; //��
	
	unsigned char  uc_line_number  ;//��
	
	unsigned char  uc_section_number ; //��
	
	unsigned char  uc_station_number ; //վ
	
	unsigned char  uc_occupy_line_number ; //ʵ�������ӵ�ͨ��
	
	unsigned char  uc_card_number ; //���ڵ�ad�ɼ�����
	
} Input_Channel ;



//ͨ������ͼ�ṹ�壬*p_input_channleָ��ָ���趨�õ�ͨ��˵���ṹ��,�ýṹ����Ŀ�ɳ����ܸ�������
//===============================================================
typedef  struct
{
	Iput_Channel   *p_input_channle ;
	
	unsigned char  uc_input_channle_number ;
	
} Input_Channel_Map ;



//AD �ɼ����������ýṹ�壬�ɲɼ��������ṩ
//===============================================================
typedef struct _PCI8664_PARA_AD
{
	LONG ADMode; // AD ģʽѡ��(����/���鷽ʽ)
	
	LONG FirstChannel; // ͬ����ͨ����[0, 31]
	
	LONG LastChannel; // ͬ��ĩͨ����[0, 31]��Ҫ��ĩͨ��������ڻ������ͨ��
	
	LONG Frequency; // �ɼ�Ƶ�ʣ���λΪHz
	
	LONG GroupInterval; // ����ʱ�������(��λ��΢��) [1, 419430]
	
	LONG LoopsOfGroup; // ����ѭ������[1, 255]
	
	LONG Gains; // ��������
	
	LONG InputRange; // ģ�����������̷�Χ
	
	LONG TriggerMode; // ����ģʽѡ��
	
	LONG TriggerType; // ��������ѡ��(���ش���/���崥��)
	
	LONG TriggerDir; // ��������ѡ��(����/���򴥷�)
	
	LONG TimeoutForNpt; // �ǿղ�ѯ��ʽ�µĳ�ʱʱ��,��λ��,ȡֵ��ΧΪ[0, 3600]
	
}PCI8664_PARA_AD ;




//===============================================================
void    Fun_Card_Number_Init( int  num ) ;//����ϵͳ�ڲɼ������

void    Fun_Line_Number_Init( int  num ) ; //����ϵͳ�ڳ�������Ŀ

void    Fun_AD_Init( int card_number , PPCI8664_PARA_AD * p ) ;//�����û�����Ĳ���AD�ɼ�����ʼ��

void    Fun_AD_Init( int card_number ) ;//����Ĭ�ϵĲ�������ʼ����AD�ɼ���

void    Fun_Channel_Map_Init( Input_Channel_Map * p ) ;//��ʼ�����߶��壬��ʼ���趨����ͨ�����ڵ��ߡ��ࡢ��

void    Fun_Buf_Len_Init( int line_data_deep , int ad_data_deep ) ;//��ʼ��ad�ɼ����ݻ������Ĵ�С����ͨ���������ݻ�������С

void    Fun_Uninstall_Device( ) ;//�ͷų�ʼ����̬���ٵ��ڴ浥Ԫ