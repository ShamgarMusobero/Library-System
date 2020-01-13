//Coded by Shamgar Musobero
//happygem3@gmail.com

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	
		struct student
		{
		char regnumber[20];
		char lastname[40];
		char firstname[30];
		char programm[30];
		char booktittle[30];
		char author[20];
		int date;
		int time;

		}x;
		struct Admin
		{
			char password[40];
			char username[40];
		}
		librarian;
		struct search
		{
		char search[30];
		char search1[20];
		}s;

void main()

	{
	char pss[40];
	char uss[40];
	int i,attempts=3;
	int option;
	

	FILE *pass;
	pass = (fopen("/home/soblan/Desktop/REGISTER/password.txt","r"));

	FILE *usss;
	usss =(fopen("/home/soblan/Desktop/REGISTER/username.txt","r"));
//To check for password and username for 3 times
			while(attempts!=0){
				printf("Enter the username\n");
				scanf("%s",uss);
				fscanf(usss,"%s",librarian.username);

				printf("Enter the password\n");
				scanf("%s",pss);
				fscanf(pass,"%s",librarian.password);

					if ((strcmp(librarian.password,pss) == 0) && (strcmp(librarian.username,uss) == 0)){
						printf("You have been granted access\n");
						printf("Welcome to Soblan library\n");
						printf("Choose any from the following:\n 1.To Capture student details:\n 2.To display information:\n 3.Search For the information");
										
										scanf("%d",&option);
						
											if(option==1) {
											FILE *add;
											add=(fopen("/home/soblan/Desktop/REGISTER/add.txt","a+"));


												printf("Enter regnumber\n");
												scanf("%s",x.regnumber);
												fprintf(add, "regnumber %s ",x.regnumber);

												printf("Enter firstname\n");
												scanf("%s",x.firstname);
												fprintf(add, "firstname %s ",x.firstname);

												printf("Enter lastname\n");
												scanf("%s",x.lastname);
												fprintf(add, "lastname %s ",x.lastname);

												printf("Enter programm\n");
												scanf("%s",x.programm);
												fprintf(add, "programm %s ",x.programm);

												printf("Enter booktittle\n");
												scanf("%s",x.booktittle);
												fprintf(add, "booktittle %s ",x.booktittle);

												printf("Enter author\n");
												scanf("%s",x.author);
												fprintf(add, "author  %s ",x.author);

												printf("Enter date\n");
												scanf("%d",&x.date);
												fprintf(add, "date %d ",x.date);

												printf("Enter time\n");
												scanf("%d",&x.time);
												fprintf(add, "time %d ",x.time);
												fclose(add);
												}

												else if(option==2)
												{
												
												FILE *read;
												read =(fopen("/home/soblan/Desktop/REGISTER/add.txt","r+"));
												fscanf(read,"\n%s",x.regnumber);
												printf("%s\n",x.regnumber );

												fscanf(read,"\n%s",x.firstname);
												printf("%s\n",x.firstname );

												fscanf(read,"\n%s",x.lastname);
												printf("%s\n",x.lastname );

												fscanf(read,"\n%s",x.programm);
												printf("%s\n",x.programm);

												fscanf(read,"\n%s",x.booktittle);
												printf("%s\n",x.booktittle );

												fscanf(read,"\n%s",x.author);
												printf("%s\n",x.author );

												fscanf(read,"\n%d",&x.date);
												printf("%d\n",x.date);

												fscanf(read,"\n%d",&x.time);
												printf("%d\n",x.time);

												}else if(option=3){

																			printf("\nSearch library file for a booking history of a book using booktittle or Regno : \n");

																			printf("Enter the booktittle\n");
																			scanf("%s",s.search);
																			printf("Regno\n");
																			scanf("%s",s.search1);

																			FILE *add;
																			add=(fopen("/home/soblan/Desktop/REGISTER/add.txt","r"));

																			if (s.search1 == x.regnumber && s.search == x.booktittle){
																					
																				fscanf(add,"\n%s",x.firstname);
																				printf("%s\n",x.firstname );

																				fscanf(add,"\n%s",x.lastname);
																				printf("%s\n",x.lastname );

																				fscanf(add,"\n%s",x.programm);
																				printf("%s\n",x.programm);

																				fscanf(add,"\n%s",x.author);
																				printf("%s\n",x.author );

																				fscanf(add,"\n%d",&x.date);
																				printf("%d\n",x.date);

																				fscanf(add,"\n%d",&x.time);
																				printf("%d\n",x.time);

																					}
																					else{
																							printf("Entry not found");
																						}
			
											} else {
												printf("Invalid option");

											}
											
						break;
					}else{
						printf("password failed %d attempts left",attempts=attempts-1);
					}

			}

}