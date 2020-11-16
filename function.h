#ifndef __function_h__
#define __function_h__

/*     全局变量    */
struct xy //坐标
{
	int x;
	int y;
};

struct xy first_pos;
struct xy end_pos;

bool quit_door; //是否进入主界面
int finish; //是否完成滑动

/*     函数声明    */
void button_beep();
void* time1(void* arg);
int showpic();
int music();
int door();
int lock();
int ts();
int readFileList(char* name1, char* name2,char pic_name[20][30]);
void* slide(void* arg);
int show_bmp(int bmp_w, int bmp_h, int x, int y, char* name,int choice);
int commute();
int wechat();
void* server();
int roll(int i, int length, int direct);
struct LcdDevice *init_lcd(const char *device);

#endif