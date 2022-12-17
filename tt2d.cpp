#include<graphics.h>
#include<math.h>

void veDuongThang( int x1, int y1, int x2, int y2, int dx, int dy){ 
	line(x1,y1,x2,y2); //Ve doan thang
	
}
void Tinhtien2D( int x1, int y1, int x2, int y2, int dx, int dy){
	int x11, y11, x22, y22;
	
	
	x11 = x1+dx;
	y11 = y1+dy;
	x22 = x2+dx;
	y22 = y2+dy;

	veDuongThang(x11,y11, x22, y22,dx,dy); // Ve lai tam giac voi toa do moi
}

int main(){
	initwindow(960, 500);
	int x1 = 420, y1 = 42;
	int x2 = 520 , y2 = 50;
	int dx = 400, dy = 200;

	

		
//		putpixel(dx,dy,15); // Ve diem Q
		setcolor(14); // Chon mau 
		veDuongThang(x1,y1,x2,y2,dx,dy);
		setcolor(10);
		Tinhtien2D(x1,y1,x2,y2,dx,dy);
		
	

	setcolor(15);
	outtextxy(10,40, "Q(400,200)");
	outtextxy(10,20,"Tinh tien 2D");
	setcolor(14);
	outtextxy(550,50,"Vi tri ban dau");
	setcolor(10);
	outtextxy(700, 225, "Vi tri sau khi Tinh Tien");
	getch();
};
