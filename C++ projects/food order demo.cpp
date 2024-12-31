#include<iostream> //input and output operations
#include<string.h> //contains functions for manipulating string(arrays of characters)
#include<conio.h> //stands for console input/output used for tasks like reading keystrokes,moving the cursor on screen changing text colours and clearing console can be handy while creating a text based user interface
#include<fstream> //used for performing input and output operations with files includes classes like ifstream,ofstream,fstream
#include<unistd.h> //stands for unix standard provides access to variety of system calls and constants related to system and file i/o process control and other low level operations
#include<windows.h>//provides access to wide range of windows api functions and data types
using namespace std;
class one
{


public:
	void menu1();

};
void one::menu1()
{

		cout<<"\n\n\n\t\t\t\t\t ========== Discover a World of Deliciousness at Your Fingertips =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t STARTER --->"<<endl;
	cout<<"\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Crispy Corn (Rs.170)\t\t\t[2] Veg Shangrilla(Rs.170)\t\t\t\t[3] Veg Oriental (Rs.160)\n\t[4] Dragon vegetables (Rs.150)\t\t\t[5] Thai Vegetables (Rs.150)\t\t\t\t[6] Veg Manchurian (Rs.150)\n\t[7] Crispy Veg (Rs.140)\t\t\t\t[8] Veg Springrolls (Rs.150)\t\t\t\t[9] Veg Palak Rolls (Rs.140)\n\t[10] Chicken Lollipop (Rs.110)\t\t\t[11] Chicken Sukka Fry(Rs.120)\t\t\t\t[12] Chicken 65 (Rs.130)\n\t[13] Butter Chicken Masala (Rs.160)\t\t[14] Chicken Chettinad (Rs.140)\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\n\n\t MAIN COURSE --->"<<endl;
	cout<<"\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[16] Veg Kolhapuri (Rs.350)\t\t\t[17] Veg Kurma (Rs.440)\t\t\t\t\t[18] Veg Kofta (Rs.580)\n\t[19] Veg Keema (Rs.520)\t\t\t\t[20] Veg Hyderabadi (Rs.350)\t\t\t\t[21] Veg Maratha (Rs.400)\n\t[22] Veg Pahadi (Rs.420)\t\t\t[23] Matar Paneer (Rs.540)\t\t\t\t[24] Palak Paneer (Rs.548)\n\t[25] Panner Bhurji Dry(Rs.390)\t\t\t[26] Paneer Mushroom Pizza(Rs.525)\t\t\t[27] Paneer Butter Masala (Rs.425)\n\t[28] Paneer Makhanwala (Rs.335)\t\t\t[29] Paneer Lajavab (Rs.324)\t\t\t\t[30] Paneer Adraki (Rs.360)\n\t[31] Dal Fry(Rs.340)\t\t\t\t[32] Daal Tadka (Rs.400)\t\t\t\t[33] Daal palak(Rs.430)\n\t[34] Daal Makhani(Rs.420)\t\t\t[35] Chicken Kadhai (Rs.480)\t\t\t\t[36] Butter Chicken (Rs.480)\n\t[37] Chicken Dilruba (Rs.500)\t\t\t[38] Chicken Maratha (Rs.440)\t\t\t\t[39] Tandoor Rooti(Rs.350)\n\t[40] Butter Tandoor Roti(Rs.450)\t\t[41] Butter Naan(Rs.60)\t\t\t\t\t[42] Garlic Naan(Rs.60)\n\t[43] Chapati(Rs.15)\t\t\t\t[44] Bhakari Kadak(Rs.20)\t\t\t\t[45] Plane Rice(Rs.45)\n\t[46] Jeera Rice(Rs.60)\t\t\t\t[47] Masala Rice(Rs.75)\t\t\t\t\t[48] Veg Biryani(Rs.100)\n\t[49] Chicken Biryani(Rs.150)\t\t\t[50] Fried Rice(Rs.80)\t\t\t\t\t[51] Paneer Fried Rice(Rs.40)\n\t==========================\t\t\t==============================\t\t\t\t===========================\n\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\n\n\n\t DESSERT AND ICE-CREAM --->"<<endl;
	cout<<"\n\t=============================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[52] Chocolate Custard (Rs.300)\t\t\t[53] Honey Dew(Rs.380)\t\t\t\t\t[54] Lemon Chiffon (Rs.200)\n\t[55] Caramal Paraline (Rs.220)\t\t\t[56] Butterland (Rs.450)\t\t\t\t[56] Saffron Pistachio (Rs.400)\n\t[57] Rainbow Sherbat (Rs.420)\t\t\t[58] Vanilla Bean (Rs.540)\t\t\t\t[59] Marshmellows (Rs.548)\n\t[60] Black Raspberry (Rs.390)\t\t\t[61] Apple Pie(Rs.525)\t\t\t\t\t[62] Valentino (Rs.425)\n\t[63] Moomers (Rs.335)\t\t\t\t[64] Toscanis(Rs.324)\t\t\t\t\t[65] Naturals (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t               ===== LIST OF RESTAURENTS =====   "<<endl;
	cout<<"\n\t[66] Indian Accent\t\t\t\t[67] Bukhara\t\t\t\t\t\t[68] Wasabi\n\t[69] Karavalli\t\t\t\t\t[70] BIryani House\t\t\t\t\t[71] Hotel Jay\n\t[72] Kinara Dining\t\t\t\t[73] Sips n Bites\t\t\t\t\t[74] Bombay Canteen\n\t[75] Trishna\t\t\t\t\t[76] Masala Library\t\t\t\t\t[77] Peshawari\t\t\t\t\n\t[78] Curry Corner\t\t\t\t[79] Maharaja's Feast\t\t\t\t\t[80] Dosa Delights\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\t\t\t\t\t\t\t\t"<<endl;
 cout<<"\n\t======================================================================================================================================="<<endl;
}
	class two:public one
	{
	protected:
		 int  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
     string y,ye;
     public:
void menu2()
{    ofstream write;
write.open("order.text");
if(!write)
{
	cout<<"file can not open"<<endl;
	exit (-1);
}

   a:
   	b:
   		c:
   	 cout<<"\n\n\tENTER YOUR ORDER (one order at a time): ";
      cin>>ch;


  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";

  cin>>ye;

  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;

   		a=480;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 2:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;

		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Exotica : 440";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 3:
   		cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		cin>>pizza;

   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  Chicken Sizzler : 580";
   			write<<" \n";
   				write<<"NUMBER OF Chicken Sizzler IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 4:
   		cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		cin>>pizza;

   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chrispy Chicken : 520";
   	write<<" \n";
   		write<<"NUMBER OF Chrispy Chicken IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 5:
   		cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		cin>>pizza;

   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER  Spaghetti : 350";
   		write<<" \n";
   			write<<"NUMBER OF Spaghetti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		cin>>pizza;

   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Country Feast : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 7:
   		cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		cin>>pizza;

   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Tetrazzini : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Tetrazzini IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 8:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;

   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Double Cheese : 540";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

	case 9:
	cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		cin>>pizza;

		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Makizushi : 548";
		write<<" \n";
			write<<"NUMBER OF Makizushi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 10:
   		cout<<"\n\n\tHOW MANY HAM BURGER YOU WANT :";
   		cin>>pizza;

   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Ham Burger : 390";
   		write<<" \n";
   			write<<"NUMBER OF Ham Burger IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Ham Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 11:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;

   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Margherita : 525";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 12:
   		cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>pizza;

   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   			write<<"NUMBER OF Fish 'n' Chips IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 13:
   		cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>pizza;

   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER  Fajitas  : 335";
   		write<<" \n";
   			write<<"NUMBER OF Fajitas IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 14:
   		cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		cin>>pizza;

   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Tempura : 324";
   		write<<" \n";
   			write<<"NUMBER OF Tempura IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 15:
   		cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		cin>>pizza;

   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;

   	case 66:
   		cout<<"\n\t\t\t\t\t Have a good day "<<endl;
   	exit(0);
   	break;

   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (y/n) :";
   cin>>y;
   if(y=="y"|| y=="Y")
   {
   	goto a;
   }
   else
   {
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353               Cashier :  Susmit"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Delivery Agent details: "<<endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Name:Akshay kumar        Contact:4579621458       "<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
                        cout << "\n\t\t\t\t\t\t\t  YOUR ORDER WILL BE DELIVERED IN 30 MINUTES "<<endl;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;


  write.close();
  }
  void show1()
  {
  	menu1();
  	menu2();
  }

};
class three:public one,public two
{
	public:
		void total()
      {

      				cout<<"\n\n\t\t\t\t\t\t\ Welcome to our Food order system\n\n\n";
      				system("PAUSE");//Halts the program
      				system("CLS"); //Clears the screen
      				show1();
	  }
};
int main()
{
   three ob;
   ob.total();
   getch();
}
