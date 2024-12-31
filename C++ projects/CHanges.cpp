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
	cout<<"\n\t MAIN COURSE --->"<<endl;
	cout<<"\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[16] Veg Kolhapuri (Rs.350)\t\t\t[17] Veg Kurma (Rs.440)\t\t\t\t\t[18] Veg Kofta (Rs.580)\n\t[19] Veg Keema (Rs.520)\t\t\t\t[20] Veg Hyderabadi (Rs.350)\t\t\t\t[21] Veg Maratha (Rs.400)\n\t[22] Veg Pahadi (Rs.420)\t\t\t[23] Matar Paneer (Rs.540)\t\t\t\t[24] Palak Paneer (Rs.548)\n\t[25] Panner Bhurji Dry(Rs.390)\t\t\t[26] Paneer Mushroom Pizza(Rs.525)\t\t\t[27] Paneer Butter Masala (Rs.425)\n\t[28] Paneer Makhanwala (Rs.335)\t\t\t[29] Paneer Lajavab (Rs.324)\t\t\t\t[30] Paneer Adraki (Rs.360)\n\t[31] Dal Fry(Rs.340)\t\t\t\t[32] Daal Tadka (Rs.400)\t\t\t\t[33] Daal palak(Rs.430)\n\t[34] Daal Makhani(Rs.420)\t\t\t[35] Chicken Kadhai (Rs.480)\t\t\t\t[36] Butter Chicken (Rs.480)\n\t[37] Chicken Dilruba (Rs.500)\t\t\t[38] Chicken Maratha (Rs.440)\t\t\t\t[39] Tandoor Rooti(Rs.350)\n\t[40] Butter Tandoor Roti(Rs.450)\t\t[41] Butter Naan(Rs.60)\t\t\t\t\t[42] Garlic Naan(Rs.60)\n\t[43] Chapati(Rs.15)\t\t\t\t[44] Bhakari Kadak(Rs.20)\t\t\t\t[45] Plane Rice(Rs.45)\n\t[46] Jeera Rice(Rs.60)\t\t\t\t[47] Masala Rice(Rs.75)\t\t\t\t\t[48] Veg Biryani(Rs.100)\n\t[49] Chicken Biryani(Rs.150)\t\t\t[50] Fried Rice(Rs.80)\t\t\t\t\t[51] Paneer Fried Rice(Rs.40)\n\t==========================\t\t\t==============================\t\t\t\t===========================\n\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\n\t DESSERT AND ICE-CREAM --->"<<endl;
	cout<<"\n\t=============================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[52] Chocolate Custard (Rs.300)\t\t\t[53] Honey Dew(Rs.380)\t\t\t\t\t[54] Lemon Chiffon (Rs.200)\n\t[55] Caramal Paraline (Rs.220)\t\t\t[56] Butterland (Rs.450)\t\t\t\t[57] Saffron Pistachio (Rs.400)\n\t[58] Rainbow Sherbat (Rs.420)\t\t\t[59] Vanilla Bean (Rs.540)\t\t\t\t[60] Marshmellows (Rs.548)\n\t[61] Black Raspberry (Rs.390)\t\t\t[62] Apple Pie(Rs.525)\t\t\t\t\t[63] Valentino (Rs.425)\n\t[64] Moomers (Rs.335)\t\t\t\t[65] Toscanis(Rs.324)\t\t\t\t\t[66] Naturals (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\t\t\t\t\t\t\t\t"<<endl;
	cout<<"         LIST OF RESTAURENTS --->   "<<endl;
	cout<<"\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[67] Indian Accent\t\t\t\t[68] Bukhara\t\t\t\t\t\t[69] Wasabi\n\t[70] Karavalli\t\t\t\t\t[71] BIryani House\t\t\t\t\t[72] Hotel Jay\n\t[73] Kinara Dining\t\t\t\t[74] Sips n Bites\t\t\t\t\t[75] Bombay Canteen\n\t[76] Trishna\t\t\t\t\t[77] Masala Library\t\t\t\t\t[78] Peshawari\t\t\t\t\n\t[79] Curry Corner\t\t\t\t[80] Maharaja's Feast\t\t\t\t\t[81] Dosa Delights\n\t===========================\t\t\t============================\t\t\t\t===========================\n\t\t\t\t\t\t\t\t"<<endl;
 cout<<"\n\t======================================================================================================================================="<<endl;
}
	class two:public one
	{
	protected:
		 int  quantity,ch,restoname,a,b,c,d,S1,S2,S3,S4,S5,S6,S7,S8,S9,S10,S11,S12,S13,S14,S15,s=0;// VARIABLES FOR STARTER AND A,B,C ARE LABELS
		 int D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,D13,D14,D15; //VARIABLE FOR DESERTS AND ICE-CREAM
		 int M1,M2,M3,M4,M5,M6,M7,M8,M9,M10,M11,M12,M13,M14,M15,M16,M17,M18,M19,M20,M21,M22,M23,M24,M25,M26,M27,M28,M29,M30,M31,M32,M33,M34,M35,M36;//VARIABLE FOR MAIN COURSE
		 string restaurentchoice; //varible for printing the resto name in bill receipt
		 string dish;

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


			cout<<"\n\tYou have selected Crispy Corn";
   			cout<<"\n\n\tHOW MANY CRISPY CORN DO YOU WANT (Rs.170) :"; //THE HOW MANY IS STORED IN QUANTITY VARIABLE
   		cin>>quantity;

		dish = "Crispy Corn";

   		S1=170;
   		s=s+S1*quantity;
   		write<<"YOU ORDER Crispy Corn : 170";
   		write<<" \n";
   		write<<"NUMBER OF Crispy Corn is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED  Crispy Corn "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 2:
   		cout<<"\n\tYou have selected Veg Shangrilla";
		cout<<"\n\n\tHOW MANY Veg Shangrilla YOU WANT (Rs.170) :";
   		cin>>quantity;

			dish = "Veg Shangrilla";

		   S2=170;
   		s=s+S2*quantity;
   		write<<"YOU ORDER Veg Shangrilla : 170";
   		write<<" \n";
   			write<<"NUMBER OF Veg Shangrilla is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED  Veg Shangrilla "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 3:
   		cout<<"\n\tYou have selected Veg Oriental";
		cout<<"\n\n\tHOW MANY CHICKEN Veg Oriental YOU WANT (Rs.160):";
   		cin>>quantity;

		dish = "Veg Oriental";

   		S3=160;
   		s=s+S3*quantity;
   			write<<"YOU ORDER  Veg Oriental : 160";
   			write<<" \n";
   				write<<"NUMBER OF Veg Oriental is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED  Veg Oriental "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 4:
   		cout<<"\n\tYou have selected Dragon Vegetables";
		cout<<"\n\n\tHOW MANY Dragon vegetables YOU WANT (Rs.150) :";
   		cin>>quantity;

		dish = "Dragon Vegetables";

   		S4=150;
   		s=s+S4*quantity;
   		write<<"YOU ORDER  Dragon vegetables: 150";
		write<<" \n";
   		write<<"NUMBER OF Dragon vegetables is : "<<quantity;
   		write<<"\n";
	   cout<<"\n\n\tYOU ORDERED  Dragon vegetables"<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 5:
   		cout<<"\n\tYou have selected Thai Vegetables";
		cout<<"\n\n\tHOW MANY Thai Vegetables YOU WANT (Rs.150) :";
   		cin>>quantity;

		dish = "Thai Vegetables";

   		S5=150;
   		s=s+S5*quantity;
   		write<<"YOU ORDER Thai Vegetables : 150";
   		write<<" \n";
   			write<<"NUMBER OF Thai Vegetables is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED  Thai Vegetables "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 6:
   		cout<<"\n\tYou have selected Veg Manchurian";
		cout<<"\n\n\tHOW MANY Veg Manchurian YOU WANT (Rs.150) :";
   		cin>>quantity;

		dish = "Veg Manchurian";

   		S6=150;
   		s=s+S6*quantity;
   		write<<"YOU ORDER Veg Manchurian : 150";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Manchurian is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Manchurian "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 7:
   		cout<<"\n\tYou have selected Crispy Veg";
		cout<<"\n\n\tHOW MANY Crispy Veg YOU WANT (Rs.140) :";
   		cin>>quantity;

		dish = "Crispy Veg";

   		S7=140;
   		s=s+S7*quantity;
   		write<<"YOU ORDER Crispy Veg : 140";
   		write<<"\n ";
   			write<<"NUMBER OF Crispy Veg is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED  Crispy Veg "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 8:
   		cout<<"\n\tYou have selected Springrolls";
		cout<<"\n\n\tHOW MANY Veg Springrolls YOU WANT (Rs.150) :";
   		cin>>quantity;

		dish = "Springrolls";

   		S8=150;
   		s=s+S8*quantity;
   		write<<"YOU ORDER Veg Springrolls : 150";
   		write<<" \n";
   			write<<"NUMBER OF Veg Springrolls is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Springrolls "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 9:
	cout<<"\n\tYou have selected Palak Rolls";
	cout<<"\n\n\tHOW MANY Veg Palak Rolls YOU WANT (Rs.140) :";
   		cin>>quantity;

		dish = "Palak Rolls";

		S9=140;
		s=s+S9*quantity;
		write<<"YOU ORDER Veg Palak Rolls : 140";
		write<<" \n";
			write<<"NUMBER OF Veg Palak Rolls is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Palak Rolls "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 10:
   		cout<<"\n\tYou have selected Chicken Lollipop";
		cout<<"\n\n\tHOW MANY Chicken Lollipop YOU WANT (Rs.110) :";
   		cin>>quantity;

		dish = "Chicken Lollipop";

   		S10=110;
   		s=s+S10*quantity;
   		write<<"YOU ORDER Chicken Lollipop : 110";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Lollipop is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Chicken Lollipop "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 11:
   			cout<<"\n\tYou have selected Chicken Sukka Fry";
			cout<<"\n\n\tHOW MANY Chicken Sukka Fry YOU WANT (Rs.120) :";
   		cin>>quantity;

		dish = "Chicken Sukka Fry";

   		S11=120;
   		s=s+S11*quantity;
   		write<<"YOU ORDER Chicken Sukka Fry : 120";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Sukka Fry is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Chicken Sukka Fry "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 12:
   		cout<<"\n\tYou have selected Chicken 65";
		cout<<"\n\n\tHOW MANY Chicken 65  YOU WANT (Rs.130) :";
   		cin>>quantity;

		dish = "Chicken 65";

   		S12=130;
   		s=s+S12*quantity;
   		write<<"YOU ORDER Chicken 65  : 130";
   		write<<" \n";
   			write<<"NUMBER OF Chicken 65  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Chicken 65  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 13:
   		cout<<"\n\tYou have selected Butter Chicken Masala";
		cout<<"\n\n\tHOW MANY Butter Chicken Masala YOU WANT (Rs.160) :";
   		cin>>quantity;

		dish = "Butter Chicken Masala";

   		S13=160;
   		s=s+S13*quantity;
   		write<<"YOU ORDER  Butter Chicken Masala  : 160";
   		write<<" \n";
   			write<<"NUMBER OF Butter Chicken Masala is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Butter Chicken Masala "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 14:
   		cout<<"\n\tYou have selected Chicken Chettinad";
		cout<<"\n\n\tHOW MANY Chicken Chettinad YOU WANT (Rs.140) :";
   		cin>>quantity;

		dish = "Chicken Chettinad";

   		S14=140;
   		s=s+S14*quantity;
   		write<<"YOU ORDER Chicken Chettinad : 140";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Chettinad is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED  Chicken Chettinad "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

   	case 15:
   		cout<<"\n\tYou have selected HOT DOG";
		cout<<"\n\n\tHOW MANY HOT DOG YOU WANT (Rs.360):";
   		cin>>quantity;

		dish = "HOT DOG";

   		S15=360;
   		s=s+S15*quantity; //fn1353
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED  Hot Dog "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	//Switch cases for main course start from here

		case 16:
   		cout<<"\n\tYou have selected Veg Kolhapuri";
		cout<<"\n\n\tHOW MANY Veg Kolhapuri YOU WANT (Rs.350):";
   		cin>>quantity;

		dish = "Veg Kolhapuri";

   		M1=350;
   		s=s+M1*quantity;
   		write<<"YOU ORDER Veg Kolhapuri : 350";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Kolhapuri is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Kolhapuri "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 17:
   		cout<<"\n\tYou have selected Veg Kurma";
		cout<<"\n\n\tHOW MANY Veg Kurma YOU WANT (Rs.440):";
   		cin>>quantity;

		dish = "Veg Kurma";

   		M2=440;
   		s=s+M2*quantity;
   		write<<"YOU ORDER Veg Kurma : 440";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Kurma is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Kurma "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 18:
   		cout<<"\n\tYou have selected Veg Kofta";
		cout<<"\n\n\tHOW MANY Veg Kofta YOU WANT (Rs.580):";
   		cin>>quantity;

		dish = "Veg Kofta";

   		M3=580;
   		s=s+M3*quantity;
   		write<<"YOU ORDER Veg Kofta : 580";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Kofta is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Kofta "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 19:
   		cout<<"\n\tYou have selected Veg Keema";
		cout<<"\n\n\tHOW MANY Veg Keema YOU WANT (Rs.520) :";
   		cin>>quantity;

		dish = "veg Keema";

   		M3=520;
   		s=s+M3*quantity;
   		write<<"YOU ORDER Veg Keema: 520";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Keema is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Keema "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 20:
   		cout<<"\n\tYou have selected Veg Hyderabadi";
		cout<<"\n\n\tHOW many Veg Hyderabadi YOU WANT (Rs.350) :";
   		cin>>quantity;

		dish = "Veg Hyderabadi";

   		M4=350;
   		s=s+M4*quantity;
   		write<<"YOU ORDER Veg Hyderabadi : 350";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Hyderabadi is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Hyderabadi "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 21:
   		cout<<"\n\tYou have selected Veg Maratha";
		cout<<"\n\n\tHOW many Veg Maratha YOU WANT (Rs.400):";
   		cin>>quantity;

		dish = "Veg Maratha";

   		M5=400;
   		s=s+M5*quantity;
   		write<<"YOU ORDER Veg Maratha : 400";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Maratha is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Maratha "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 22:
   		cout<<"\n\tYou have selected Veg Pahadi";
		cout<<"\n\n\tHOW many Veg Pahadi YOU WANT (Rs.420) :";
   		cin>>quantity;

		dish = "Veg Pahadi";

   		M6=420;
   		s=s+M6*quantity;
   		write<<"YOU ORDER Veg Pahadi : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Pahadi is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Pahadi "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 23:
   		cout<<"\n\tYou have selected Matar Paneer";
		cout<<"\n\n\tHOW many Matar Paneer YOU WANT (Rs.420) :";
   		cin>>quantity;

		dish = "Matar Paneer";

   		M6=420;
   		s=s+M6*quantity;
   		write<<"YOU ORDER Veg Pahadi : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Pahadi is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Pahadi "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 24:
   		cout<<"\n\tYou have selected Palak Paneer";
		cout<<"\n\n\tHOW many Palak Paneer YOU WANT (Rs.548) :";
   		cin>>quantity;

		dish = "Palak Paneer";

   		M7=548;
   		s=s+M7*quantity;
   		write<<"YOU ORDER Palak Paneer : 548";
   		write<<"\n ";
   			write<<"NUMBER OF Palak Paneer is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Palak Paneer "<<endl<<"\n\tYOUR IS ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 25:
   		cout<<"\n\tYou have selected Paneer Bhurji Dry";
		cout<<"\n\n\tHOW many Paneer Bhurji Dry YOU WANT (Rs.390) :";
   		cin>>quantity;

		dish = "Paneer Bhurji Dry";

   		M8=390;
   		s=s+M8*quantity;
   		write<<"YOU ORDER Paneer Bhurji Dry : 390";
   		write<<"\n ";
   			write<<"NUMBER OF Paneer Bhurji Dry is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Paneer Bhurji Dry "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 26:
   		cout<<"\n\tYou have selected Paneer Mushroom Pizza";
		cout<<"\n\n\tHOW many Paneer Mushroom Pizza YOU WANT (Rs.525) :";
   		cin>>quantity;

		dish = "Paneer Mushroom Pizza";

   		M9=525;
   		s=s+M9*quantity;
   		write<<"YOU ORDER Paneer Mushroom Pizza : 525";
   		write<<"\n ";
   			write<<"NUMBER OF Paneer Mushroom Pizza is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Paneer Mushroom Pizza "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 27:
   		cout<<"\n\tYou have selected Paneer Butter Masala";
		cout<<"\n\n\tHOW many Panner Butter Masala YOU WANT (Rs.425) :";
   		cin>>quantity;

		dish = "Paneer Butter Masala";

   		M10=425;
   		s=s+M10*quantity;
   		write<<"YOU ORDER Panner Butter Masala : 425";
   		write<<"\n ";
   			write<<"NUMBER OF Panner Butter Masala is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Panner Butter Masala "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 28:
   		cout<<"\n\tYou have selected Paneer Makhanwala";
		cout<<"\n\n\tHOW many Paneer Makhanwala YOU WANT (Rs.335) :";
   		cin>>quantity;

		dish = "Paneer Makhanwala";

   		M11=335;
   		s=s+M11*quantity;
   		write<<"YOU ORDER Paneer Makhanwala : 335";
   		write<<"\n ";
   			write<<"NUMBER OF Paneer Makhanwala is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Paneer Makhanwala "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 29:
   		cout<<"\n\tYou have selected Paneer Lajavab";
		cout<<"\n\n\tHOW many Paneer Lajavab YOU WANT (Rs.324) :";
   		cin>>quantity;

		dish = "Paneer Lajavab";

   		M12=324;
   		s=s+M12*quantity;
   		write<<"YOU ORDER Paneer Lajavab : 324";
   		write<<"\n ";
   			write<<"NUMBER OF Paneer Lajavab is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Paneer Lajavab "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 30:
   		cout<<"\n\tYou have selected Paneer Adraki";
		cout<<"\n\n\tHOW many Paneer Adraki YOU WANT (Rs.360) :";
   		cin>>quantity;

		dish = "Paneer Adraki";

   		M13=360;
   		s=s+M13*quantity;
   		write<<"YOU ORDER Paneer Adraki : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Paneer Adraki is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Paneer Adraki "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 31:
   		cout<<"\n\tYou have selected Daal Fry";
		cout<<"\n\n\tHOW many Dal Fry YOU WANT (Rs.340) :";
   		cin>>quantity;

		dish = "Daal Fry";

   		M14=340;
   		s=s+M14*quantity;
   		write<<"YOU ORDER Dal Fry : 340";
   		write<<"\n ";
   			write<<"NUMBER OF Dal Fry is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Dal Fry "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 32:
   		cout<<"\n\tYou have selected Daal Tadka";
		cout<<"\n\n\tHOW many Daal Tadka YOU WANT (Rs.400) :";
   		cin>>quantity;

		dish = "Daal Tadka";

   		M15=400;
   		s=s+M15*quantity;
   		write<<"YOU ORDER Daal Tadka : 400";
   		write<<"\n ";
   			write<<"NUMBER OF Daal Tadka is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Daal Tadka "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 33:
   		cout<<"\n\tYou have selected Daal Palak";
		cout<<"\n\n\tHOW many Daal Palak YOU WANT (Rs.430) :";
   		cin>>quantity;

		dish = "Daal Palak";

   		M16=430;
   		s=s+M16*quantity;
   		write<<"YOU ORDER Daal Palak : 430";
   		write<<"\n ";
   			write<<"NUMBER OF Daal Palak is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Daal Palak "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 34:
   		cout<<"\n\tYou have selected Daal Makhani";
		cout<<"\n\n\tHOW many Daal Makhani YOU WANT (Rs.420) :";
   		cin>>quantity;

		dish = "Daal Makhani";

   		M17=420;
   		s=s+M17*quantity;
   		write<<"YOU ORDER Daal Makhani : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Daal Makhani is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Daal Makhani "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 35:
   		cout<<"\n\tYou have selected Chicken Kadhai";
		cout<<"\n\n\tHOW many Chicken Kadhai YOU WANT (Rs.480) :";
   		cin>>quantity;

		dish = "Chicken Kadhai";

   		M18=480;
   		s=s+M18*quantity;
   		write<<"YOU ORDER Chicken Kadhai : 480";
   		write<<"\n ";
   			write<<"NUMBER OF Chicken Kadhai is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Chicken Kadhai "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 36:
   		cout<<"\n\tYou have selected Butter Chicken";
		cout<<"\n\n\tHOW many Butter Chicken YOU WANT (Rs.480) :";
   		cin>>quantity;

		dish = "Butter Chicken";

   		M19=480;
   		s=s+M19*quantity;
   		write<<"YOU ORDER Butter Chicken : 480";
   		write<<"\n ";
   			write<<"NUMBER OF Butter Chicken is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Butter Chicken "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 37:
   		cout<<"\n\tYou have selected Chicken Dilruba";
		cout<<"\n\n\tHOW many Chicken Dilruba YOU WANT (Rs.500) :";
   		cin>>quantity;

		dish = "Chicken Dilruba";

   		M20=500;
   		s=s+M20*quantity;
   		write<<"YOU ORDER Chicken Dilruba : 500";
   		write<<"\n ";
   			write<<"NUMBER OF Chicken Dilruba is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Chicken Dilruba "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 38:
   		cout<<"\n\tYou have selected Chicken Maratha";
		cout<<"\n\n\tHOW many Chicken Maratha YOU WANT (Rs.440) :";
   		cin>>quantity;

		dish = "Chicken Maratha";

   		M21=440;
   		s=s+M21*quantity;
   		write<<"YOU ORDER Chicken Maratha : 440";
   		write<<"\n ";
   			write<<"NUMBER OF Chicken Maratha is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Chicken Maratha "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 39:
   		cout<<"\n\tYou have selected Tandoor Rooti";
		cout<<"\n\n\tHOW many Tandoor Rooti YOU WANT (Rs.350) :";
   		cin>>quantity;

		dish = "Tandoor Rooti";

   		M22=350;
   		s=s+M22*quantity;
   		write<<"YOU ORDER Tandoor Rooti : 350";
   		write<<"\n ";
   			write<<"NUMBER OF Tandoor Rooti is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Tandoor Rooti "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 40:
   		cout<<"\n\tYou have selected Butter Tandoor Roti";
		cout<<"\n\n\tHOW many Butter Tandoor Rooti YOU WANT (Rs.450) :";
   		cin>>quantity;

		dish = "Butter Tandoor Roti";

   		M23=450;
   		s=s+M23*quantity;
   		write<<"YOU ORDER Butter Tandoor Rooti : 450";
   		write<<"\n ";
   			write<<"NUMBER OF Butter Tandoor Rooti is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Butter Tandoor Rooti "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 41:
   		cout<<"\n\tYou have selected Butter Naan";
		cout<<"\n\n\tHOW many Butter Naan YOU WANT (Rs.60) :";
   		cin>>quantity;

		dish = "Butter Naan";

   		M24=60;
   		s=s+M24*quantity;
   		write<<"YOU ORDER  Butter Naan : 60";
   		write<<"\n ";
   			write<<"NUMBER OF  Butter Naan is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED  Butter Naan "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 42:
   		cout<<"\n\tYou have selected Garlic Naan";
		cout<<"\n\n\tHOW many Garlic Naan YOU WANT (Rs.60) :";
   		cin>>quantity;

		dish = "Garlic Naan";

   		M25=60;
   		s=s+M25*quantity;
   		write<<"YOU ORDER  Garlic Naan : 60";
   		write<<"\n ";
   			write<<"NUMBER OF  Garlic Naan is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED  Garlic Naan "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 43:
   		cout<<"\n\tYou have selected Chapati";
		cout<<"\n\n\tHOW many Chapati YOU WANT (Rs.15) :";
   		cin>>quantity;

		dish = "Chapati";

   		M26=15;
   		s=s+M26*quantity;
   		write<<"YOU ORDER Chapati : 15";
   		write<<"\n ";
   			write<<"NUMBER OF Chapati is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Chapati "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 44:
   		cout<<"\n\tYou have selected Bhakari Kadak";
		cout<<"\n\n\tHOW many Bhakari Kadak YOU WANT (Rs.20) :";
   		cin>>quantity;

		dish = "Bhakari Kadak";

   		M27=20;
   		s=s+M27*quantity;
   		write<<"YOU ORDER Bhakari Kadak : 20";
   		write<<"\n ";
   			write<<"NUMBER OF Bhakari Kadak is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Bhakari Kadak "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 45:
   		cout<<"\n\tYou have selected Plane Rice";
		cout<<"\n\n\tHOW many Plane Rice YOU WANT (Rs.45) :";
   		cin>>quantity;

		dish = "Plane Rice";

   		M28=45;
   		s=s+M28*quantity;
   		write<<"YOU ORDER Plane Rice : 45";
   		write<<"\n ";
   			write<<"NUMBER OF Plane Rice is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Plane Rice "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 46:
   		cout<<"\n\tYou have selected Jeera Rice";
		cout<<"\n\n\tHOW many Jeera Rice YOU WANT (Rs.60) :";
   		cin>>quantity;

		dish = "Jeera Rice";

   		M29=60;
   		s=s+M29*quantity;
   		write<<"YOU ORDER Jeera Rice : 60";
   		write<<"\n ";
   			write<<"NUMBER OF Jeera Rice is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Jeera Rice "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 47:
   		cout<<"\n\tYou have selected Masala Rice";
		cout<<"\n\n\tHOW many Masala Rice YOU WANT (Rs.75) :";
   		cin>>quantity;

		dish = "Masala Rice";

   		M30=75;
   		s=s+M30*quantity;
   		write<<"YOU ORDER Masala Rice : 75";
   		write<<"\n ";
   			write<<"NUMBER OF Masala Rice is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Masala Rice "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 48:
   		cout<<"\n\tYou have selected Veg Biryani";
		cout<<"\n\n\tHOW many Veg Biryani YOU WANT (Rs.160) :";
   		cin>>quantity;

		dish = "Veg Biryani";

   		M31=100;
   		s=s+M31*quantity;
   		write<<"YOU ORDER Veg Biryani : 100";
   		write<<"\n ";
   			write<<"NUMBER OF Veg Biryani is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Veg Biryani "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	 case 49:
   		cout<<"\n\tYou have selected Chicken Biryani";
		cout<<"\n\n\tHOW many Chicken Biryani YOU WANT (Rs.150) :";
   		cin>>quantity;

		dish = "Chicken Biryani";

   		M32=150;
   		s=s+M32*quantity;
   		write<<"YOU ORDER Chicken Biryani : 150";
   		write<<"\n ";
   			write<<"NUMBER OF Chicken Biryani is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Chicken Biryani "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 50:
   		cout<<"\n\tYou have selected Fried Rice";
		cout<<"\n\n\tHOW many Fried Rice YOU WANT (Rs.80) :";
   		cin>>quantity;

		dish = "Fried Rice";

   		M33=80;
   		s=s+M33*quantity;
   		write<<"YOU ORDER Fried Rice  : 80";
   		write<<"\n ";
   			write<<"NUMBER OF Fried Rice  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Fried Rice  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 51:
   		cout<<"\n\tYou have selected Paneer Fried Rice";
		cout<<"\n\n\tHOW many Paneer Fried Rice YOU WANT (Rs.40) :";
   		cin>>quantity;

		dish = "Paneer Fried Rice";

   		M34=40;
   		s=s+M34*quantity;
   		write<<"YOU ORDER Paneer Fried Rice  : 40";
   		write<<"\n ";
   			write<<"NUMBER OF Paneer Fried Rice  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Paneer Fried Rice  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	//Switch cases for deserts and ice cream

	case 52:
   		cout<<"\n\tYou have selected Chocolate Custard";
		cout<<"\n\n\tHOW many Chocolate Custard YOU WANT (Rs.300) :";
   		cin>>quantity;

		dish = "Chocolate Custard";

   		D1=300;
   		s=s+D1*quantity;
   		write<<"YOU ORDER Chocolate Custard  : 300";
   		write<<"\n ";
   			write<<"NUMBER OF Chocolate Custard  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Chocolate Custard  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 53:
   		cout<<"\n\tYou have selected Honey Dew";
		cout<<"\n\n\tHOW many Honey Dew YOU WANT (Rs.380) :";
   		cin>>quantity;

		dish = "Honey Dew";

   		D2=380;
   		s=s+D2*quantity;
   		write<<"YOU ORDER Honey Dew  : 380";
   		write<<"\n ";
   			write<<"NUMBER OF Honey Dew  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Honey Dew  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 54:
   		cout<<"\n\tYou have selected Lemon Chiffon";
		cout<<"\n\n\tHOW many Lemon Chiffon YOU WANT (Rs.200) :";
   		cin>>quantity;

		dish = "Lemon Chiffon";

   		D3=200;
   		s=s+D3*quantity;
   		write<<"YOU ORDER Lemon Chiffon  : 200";
   		write<<"\n ";
   			write<<"NUMBER OF Lemon Chiffon is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Lemon Chiffon  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 55:
   		cout<<"\n\tYou have selected Caramel Paraline";
		cout<<"\n\n\tHOW many Caramel Paraline YOU WANT (Rs.220) :";
   		cin>>quantity;

		dish = "Caramel Paraline";

   		D4=220;
   		s=s+D4*quantity;
   		write<<"YOU ORDER Caramel Paraline  : 220";
   		write<<"\n ";
   			write<<"NUMBER OF Caramel Paraline is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Caramel Paraline  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 56:
   		cout<<"\n\tYou have selected Butterland";
		cout<<"\n\n\tHOW many Butterland YOU WANT (Rs.450) :";
   		cin>>quantity;

		dish = "Butterland";

   		D5=450;
   		s=s+D5*quantity;
   		write<<"YOU ORDER Butterland  : 450";
   		write<<"\n ";
   			write<<"NUMBER OF Butterland is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Butterland  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 57:
   		cout<<"\n\tYou have selected Saffron Pistachio";
		cout<<"\n\n\tHOW many Saffron Pistachio YOU WANT (Rs.400) :";
   		cin>>quantity;

		dish = "Saffron Pistachio";

   		D6=400;
   		s=s+D6*quantity;
   		write<<"YOU ORDER Saffron Pistachio  : 400";
   		write<<"\n ";
   			write<<"NUMBER OF Saffron Pistachio is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Saffron Pistachio  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 58:
   		cout<<"\n\tYou have selected Rainbow Sherbat";
		cout<<"\n\n\tHOW many Rainbow Sherbat YOU WANT (Rs.420) :";
   		cin>>quantity;

		dish = "Rainbow Sherbat";

   		D7=420;
   		s=s+D7*quantity;
   		write<<"YOU ORDER Rainbow Sherbat  : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Rainbow Sherbat is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Rainbow Sherbat  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 59:
   		cout<<"\n\tYou have selected Vanilla Bean";
		cout<<"\n\n\tHOW many Vanilla Bean YOU WANT (Rs.540) :";
   		cin>>quantity;

		dish = "Vanilla Bean";

   		D8=540;
   		s=s+D8*quantity;
   		write<<"YOU ORDER Vanilla Bean  : 540";
   		write<<"\n ";
   			write<<"NUMBER OF Vanilla Bean is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Vanilla Bean  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 60:
   		cout<<"\n\tYou have selected Marshmellows";
		cout<<"\n\n\tHOW many Marshmellows YOU WANT (Rs.548) :";
   		cin>>quantity;

		dish = "Marshmellows";

   		D9=548;
   		s=s+D9*quantity;
   		write<<"YOU ORDER  Marshmellows  : 548";
   		write<<"\n ";
   			write<<"NUMBER OF Marshmellows is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Marshmellows  "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 61:
   		cout<<"\n\tYou have selected Black Raspberry";
		cout<<"\n\n\tHOW many Black Raspberry YOU WANT (Rs.390) :";
   		cin>>quantity;

		dish = "Black Raspberry";

   		D10=390;
   		s=s+D10*quantity;
   		write<<"YOU ORDER  Black Raspberry   : 390";
   		write<<"\n ";
   			write<<"NUMBER OF Black Raspberry  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Black Raspberry   "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 62:
   		cout<<"\n\tYou have selected Apple Pie";
		cout<<"\n\n\tHOW many Apple Pie YOU WANT (Rs.525) :";
   		cin>>quantity;

		dish = "Apple Pie";

   		D11=525;
   		s=s+D11*quantity;
   		write<<"YOU ORDER  Apple Pie  : 525";
   		write<<"\n ";
   			write<<"NUMBER OF Apple Pie  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Apple Pie   "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 63:
   		cout<<"\n\tYou have selected Valentino";
		cout<<"\n\n\tHOW many Valentino YOU WANT (Rs.425) :";
   		cin>>quantity;

		dish = "Valentino";

   		D12=425;
   		s=s+D12*quantity;
   		write<<"YOU ORDER  Valentino  : 425";
   		write<<"\n ";
   			write<<"NUMBER OF Valentino  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Valentino   "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 64:
   		cout<<"\n\tYou have selected Moomers";
		cout<<"\n\n\tHOW many Moomers YOU WANT (Rs.335) :";
   		cin>>quantity;

		dish = "Moomers";

   		D13=335;
   		s=s+D13*quantity;
   		write<<"YOU ORDER  Moomers : 335";
   		write<<"\n ";
   			write<<"NUMBER OF Moomers  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Moomers   "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 65:
   		cout<<"\n\tYou have selected Toscanis";
		cout<<"\n\n\tHOW many Toscanis YOU WANT (Rs.324) :";
   		cin>>quantity;

		dish = "Toscanis";

   		D14=324;
   		s=s+D14*quantity;
   		write<<"YOU ORDER  Toscanis : 324";
   		write<<"\n ";
   			write<<"NUMBER OF Toscanis  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Toscanis   "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;

	case 66:
   		cout<<"\n\tYou have selected Naturals";
		cout<<"\n\n\tHOW many Naturals YOU WANT (Rs.360) :";
   		cin>>quantity;

		dish = "Naturals";

   		D15=360;
   		s=s+D15*quantity;
   		write<<"YOU ORDER  Naturals : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Naturals  is : "<<quantity;
   		write<<"\n";
   	cout<<"\n\n\tYOU ORDERED Naturals   "<<endl<<"\n\tYOUR ORDER IS SUCCESSFULLY PLACED "<<endl;
   	break;


   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }

   	d:
	  cout<<"\n\n\tENTER YOUR FAVOURITE RESTAURENT(one at a time): ";
	  cin>>restoname;

	  switch(restoname){
		case 67:
				cout<<"\n\tYou have selected Indian Accent";
				restaurentchoice = "Indian Accent";
				break;

		case 68:
				cout<<"\n\tYou have selected Bukhara";
				restaurentchoice = "Bukhara";
				break;

		case 69:
				cout<<"\n\tYou have selected Wasabi";
				restaurentchoice = "Wasabi";
				break;

		case 70:
				cout<<"\n\tYou have selected Karavalli";
				restaurentchoice = "Karavalli";
				break;

		case 71:
				cout<<"\n\tYou have selected Biryani House";
				restaurentchoice = "Biryani House";
				break;

		case 72:
				cout<<"\n\tYou have selected Hotel Jay";
				restaurentchoice = "Hotel Jay";
				break;

		case 73:
				cout<<"\n\tYou have selected Kinara Dining";
				restaurentchoice = "Kinara Dining";
				break;

		case 74:
				cout<<"\n\tYou have selected Sips n bites";
				restaurentchoice = "Sips n bites";
				break;

		case 75:
				cout<<"\n\tYou have selected Bombary Canteen";
				restaurentchoice = "Bombay Canteen";
				break;

		case 76:
				cout<<"\n\tYou have selected Trishna";
				restaurentchoice = "Trishna";
				break;

		case 77:
				cout<<"\n\tYou have selected Masala Library";
				restaurentchoice = "Masala library";
				break;

		case 78:
				cout<<"\n\tYou have selected Peshawri";
				restaurentchoice = "Peshawari";
				break;

		case 79:
				cout<<"\n\tYou have selected Curry Corner";
				restaurentchoice = "Curry Corner";
				break;

		case 80:
				cout<<"\n\tYou have selected Maharaja's Feast";
				restaurentchoice = "Maharaja's Feast";
				break;

		case 81:
				cout<<"\n\tYou have selected Dosa Delights";
				restaurentchoice = "Dosa Delights";

				break;

		default:
				 cout << "\n\tInvalid choice";
				 goto d;
				 break;

	  }

   cout<<"\n\n\tDO YOU WANT ANOTHER ORDER (y/n) :";
   cin>>y;
   if(y=="y"|| y=="Y")
   {
   	goto a;
   }
   else
   {
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDERING :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(200);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;

						cout << "\n\t\t\t\t\t\t\t =============================================================="<<endl;
						cout << "\n\t\t\t\t\t\t\t  Bill No : CP51      Order : NB1353       Cashier: Susmit"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Delivery Agent details: "<<endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Name:JOHNNY  Contact:4579621458  ID:ZA34IPT  Vehicle No:MH23456"<<endl;
						cout << endl;
                        write<<"\t\t\t\t\t ";
                        write<<"\tTOTAL BILL IS : "<<s;
                        cout << "\t\t\t\t\t\t\t  YOUR ORDER WILL OF "<<quantity<<" "<<dish<<" BE DELIVERED IN 30 MINUTES "<<endl;
						cout<<"\n\t\t\t\t\t\t\t  FROM RESTAURENT: "<<restaurentchoice;
						cout<<"\n\n\t\t\t\t\t\t\t  YOUR TOTAL BILL is Rs."<<s<<endl;
						cout << "\n\t\t\t\t\t\t\t =============================================================="<<endl;
						cout << "\n\n\t\t\t\t\t\t\t =======================THANK YOU VISIT AGAIN===================="<<endl;


  write.close();
  }
  void show1() //this function puts this two function in sequence
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
