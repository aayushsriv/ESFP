 
#include<stdio.h>
#include<string.h>

int form(char name[],int password);
void intro();
//void regform();
void signinform(char uid[],int upass);
void home_data();
void info_data();
void contact_data();
void intro()
{
	printf("**************************************************************************\n");
	printf("*                                                                        *\n");
	printf("* Self-identifying the mental health status and get guidance for support.*\n");
	printf("*                                                                        *\n");
	printf("* developed by:                                                          *\n");
	printf("* Aayush Srivastava                                                      *\n");
	printf("**************************************************************************\n");
}

void form();
void form()
{
	int choice,upass;
	char uid[10];
	printf("Welcome to our app");
	printf("Enter 1 to create a new account\nEnter 2 to sign into an existing account:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //regform();
		        printf("***********************************************\n");
		        printf("Enter your new username:");
		        scanf("%s",&uid);
		        printf("\nEnter your password:");
		        scanf("%d",&upass);
		        printf("\n***********************************************\n");
		        signinform(uid,upass);
		case 2: signinform(uid,upass);
		        break;
	}
}

void app();
void app()
{
  int c;
  printf("1.Homepage\n2.Info\n3.Contact us\n");
  scanf("%d",&c);
  switch(c)
  {
  	case 1: home_data();
  	        app();
  	        break;
  	case 2: info_data();
  	        app();
  	        break;
  	case 3: contact_data();
  	        app();
			break;  
  }
}

void home_data()
{
	printf("Welcome to Our Mental Health Site!\n\n");

    printf("We are dedicated to improving mental health and providing resources for mental well-being. \nWe provide evidence-based information about mental health topics, including anxiety, depression, stress, relationship issues, and more. Our goal is to provide resources to help you on your path to a healthier life. \nWe have articles, blogs, and videos on a variety of topics to help you better understand mental health issues and how to cope with them. We also offer tools for self-care and support groups for those in need. ");
    printf("If you have any questions, please reach out to us. We are here to provide support, guidance, and resources to help you on your journey to a healthier life."); 
    printf("\n\n");
    printf("Thanks for visiting our mental health site!");
    printf("\n");
}

void info_data()
{
	printf("Welcome to our Mental Health Information page!\n"); 
    printf("Mental health is a state of emotional and psychological well-being. Mental health conditions, such as depression, anxiety, bipolar disorder, and schizophrenia, can range from mild to severe.\n"); 
    printf("It is important to recognize the signs and symptoms of mental health conditions and seek help when necessary. Below are some examples of various mental health diseases.\n\n"); 
    printf("Depression: Feeling sad or down, loss of interest in activities, fatigue, irritability, sleep issues, appetite changes\n"); 
    printf("Anxiety: Excessive fear and worry, restlessness, difficulty concentrating, muscle tension, sleep problems\n"); 
    printf("Bipolar disorder: Periods of depression and mania, difficulty sleeping, increased energy, racing thoughts, impulsiveness\n");
    printf("Schizophrenia: Delusions, hallucinations, disorganized speech, difficulty communicating, social withdrawal\n"); 
    printf("\n");
}

void  contact_data()
{
	long int phone;
	char email[30],name[20],msg[50];
	printf("Welcome to the contact page of Indian Mental Health Site! We are here to answer any questions you have about mental health in India. Please fill out the form below and we will get back to you as soon as possible.\n");
	printf("Enter Name:");
	scanf("%s",&name);
	printf("\nEnter Email:");
	scanf("%s",&email);
	printf("\nEnter Phone Number:");
	scanf("%ld", &phone);
	printf("\nLeave a message to us:");
	scanf("%s",&msg);
	
}
//
//void regform()
//{
//  form();	
//}

void signinform(char uid[],int upass)
{
	//printf("%s",uid);
  char user_id[10];
  int user_ip;
  printf("\nEnter name and pass\n:");
  scanf("%s",&user_id);
  scanf("%d",&user_ip);
  if(strcmp(user_id,uid)==0 && user_ip==upass)
  {
  	app();
  }
  else
  {
  	printf("doesnt work");
  }
}



int main()
{
	intro();
	form();
	return 0;
}