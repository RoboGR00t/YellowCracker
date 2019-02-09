// Custom Password List Machine
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

int main()
{
	
		// Variables 
	char fname[20];
	char lname[20];
	char nname[20];
	char fteam[20];
	char pname[20];
	char bday[20];
	char fnumber[20];
	char town[20];
	char gbfriend[20];
	char extra[20];
	char all[200];
	char pref1;
	char pref2;
	char pref5;
	char temp2;
	char pass[5];
	char only[2000];
	// Save vars
	char path2[100];
	char slash[5] = {'/'};
	char path[100] = {'/','r','o','o','t','/'};
	char filename[20];
	// Counters
	int fn , ln , nn , ft , pn , bd , fnu , t , gb , ex , j , on ;
	int lenght1,lenght2,lenght3,lenghtotal;
	int sum,i,try;
	int len,len2,len3;
	// engeens variables
	int e1, e2 , e3 , e4 , e5 , e6 , e7 , e8 , e9 , e10 , e11 , e12 , e13 , pref3 , pref4 ,pr,mtr;
	// timer vars
	time_t start,end;
  	double dif = 0 ;
	int hour = 0 , min = 0;
	char prefloop = 'Y' ;
	char pref3b[3] , pref4b[3];

		do
		{
			// Font
			printf("\n");
	    	printf("\n");
			printf("\n __   __   _ _             ___             _           ");
			printf("\n \\ \\ / /__| | |_____ __ __/ __|_ _ __ _ __| |_____ _ _ ");           
	 		printf("\n  \\ V / -_) | / _ \\ V  V / (__| '_/ _` / _| / / -_) '_|");
	    	printf("\n   |_|\\___|_|_\\___/\\_/\\_/ \\___|_| \\__,_\\__|_\\_\\___|_|  ");                                           
	    	printf("\n                                                       ");
	    	printf("\n=============== By Giorgos Roumeliotis ================");
	    	printf("\n");
	    	printf("\n");
			// Users Menu And Prefrences
			
			lenght1 = 0;
			lenght2 = 0;
			lenght3 = 0;


			printf("\n[*] First Name : ");
			scanf("%s",fname);
		
			for(fn=0; fname[fn] != '\0'; )
	    	{
	    	    fn = fn + 1;
	    	}

			printf("\n[*] Last Name : ");
			scanf("%s",lname);
		
			for(ln=0; lname[ln] != '\0'; )
	    	{
	    	    ln = ln + 1;
	    	}

			printf("\n[*] Birthday Date : ");
			scanf("%s",bday);
		
			for(bd=0; bday[bd] != '\0'; )
	    	{
	        	bd = bd + 1;
	    	}

	    	lenght1 = fn + ln + bd;

			printf("\n-Do you want to add more victoms information ? ");
			printf("\n-You can not skip the completion of the info ");
			printf("\n(Y/N)?");
			scanf("%s",&pref1);
			if(pref1 != 'Y' || pref1 != 'y' || pref1 !='N' || pref1 != 'n')
			{
				while(pref1 != 'Y' && pref1 != 'y' && pref1 !='N' && pref1 != 'n')
				{
					scanf("%s",&pref1);
				}
			}	
			printf("\n");
			if(pref1 == 'Y' || pref1 == 'y')
			{
				printf("\n[*] Nick Name : ");
				scanf("%s",nname);
		
				for(nn=0; nname[nn] != '\0'; )
	    		{
	        		nn = nn + 1;
	    
	    		}

				printf("\n[*] Favorite Team : ");
				scanf("%s",fteam);
		
		    	for(ft=0; fteam[ft] != '\0'; )
	     		{
	        		ft = ft + 1;
	    		}

				printf("\n[*] Favorite Number : ");
				scanf("%s",fnumber);
		
				for(fnu=0; fnumber[fnu] != '\0'; )
	    		{
	        		fnu = fnu + 1;
	    		}

				printf("\n[*] Girlfriends/Boyfriends Name : ");
				scanf("%s",gbfriend);
		
		    	for(gb=0; gbfriend[gb] != '\0'; )
	    		{
	        		gb = gb + 1;
	    		}

				printf("\n[*] Pets Name : ");
				scanf("%s",pname);
		
				for(pn=0; pname[pn] != '\0'; )
	    		{
	        		pn = pn + 1;
	    		}

				printf("\n[*] Town : ");
				scanf("%s",town);	
		
		    	for(t=0; town[t] != '\0'; )
	    		{
	        		t = t + 1;
	    		}

	    		lenght2 = nn + t + ft + pn + gb + fnu;


	    		strcat(strcat(strcat(strcat(strcat(strcat(all,nname),fteam),fnumber),gbfriend),pname),town);

			}
			printf("\n-Do you want to add other character ?");
			printf("\n(Y/N)?");
			scanf("%s",pref2);
			if(pref2 != 'Y' || pref2 != 'y' || pref2 !='N' || pref2 != 'n')
			{
				while(pref2 != 'Y' && pref2 != 'y' && pref2 !='N' && pref2 != 'n')
				{
					scanf("%s",&pref2);
				}
			}	
			printf("\n");
			if(pref2 == 'Y' || pref2 == 'y')
			{
				printf("\n[*] Other Characters : ");
				scanf("%s",extra);
		
		    	for(ex=0; extra[ex] != '\0'; )
	     		{
	        		ex = ex + 1;
	    		}

	    		lenght3 = ex;

	    		strcat(all,extra);
			}
		

			
			strcat(strcat(strcat(all,fname),lname),bday);
		
			// Main PWDLST Maker
			lenghtotal = lenght3 + lenght2 + lenght1;
			// printf("\n[*] Total Characters : %d\n",lenghtotal);
			len = strlen(all);

			// printf("\n%d\n",len );
			
			


			for(i = 1;i <= len-1;i++)
			{
				for(j = len-1;j >= 1;j--)
			{
					if(all[j-1] > all[j])
					{
						temp2 = all[j-1];
						all[j-1] = all[j];
						all[j] = temp2;
					} 

				}
			}

			// printf("\n%s\n",all);

			



			only[0] = all[0];
			
			on = 0;
			for(j = 1;j <= len;j++)
			{
				if(only[on] != all[j])
				{
				
					on = on + 1;

					only[on] = all[j];
					
				}
			}  

			// printf("%s\n",all);

			// printf("[*] Characters : %s\n",only);



			len2 = strlen(only);


			

			printf("\n[*] The Least Number Of Digits : ");
			scanf("%s",pref3b);
			pref3 = atoi( pref3b );
			while(pref3 < 1)
			{
				printf("\n> ");
				scanf("%s",pref3b);
				pref3 = atoi( pref3b );
			}
			

			printf("\n[*] The Most Number Of Digits : ");
			scanf("%s",pref4b);
			pref4 = atoi( pref4b );
			while(pref4 > 13 || pref4 < pref3)
			{
				printf("\n> ");
				scanf("%s",pref4b);
				pref4 = atoi( pref4b );
			}


			printf("\n[*] Do You Want To Save The Password List (Y/N)? ");
			scanf("%s",&pref5);
			if(pref5 != 'Y' || pref5 != 'y' || pref5 !='N' || pref5 != 'n')
			{
				while(pref5 != 'Y' && pref5 != 'y' && pref5 !='N' && pref5 != 'n')
				{
					scanf("%s",&pref5);
				}
			}






			if(pref5 == 'n' || pref5 =='N')
			{
					mtr = 0 ;

				printf("\n");

				for(pr = pref3;pr <= pref4;pr++)
				{
				
					time (&start);

					if(pr == 1)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							printf("\n%c",only[e1]);


							mtr++;
						}
					}

					
					if(pr == 2)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								printf("\n%c%c",only[e1],only[e2]);


								mtr++;
							}
						}
					}

					if(pr == 3)	
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									printf("\n%c%c%c",only[e1],only[e2],only[e3]);

									

									mtr++;
								}
							}
						}
					}
						
					if(pr == 4)	
					{	
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										printf("\n%c%c%c%c",only[e1],only[e2],only[e3],only[e4]);



										mtr++;
									}
								}
							}
						}
					}
						


					if(pr == 5)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											printf("\n%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5]);



											mtr++;
										}
									}
								}
							}
						}
					}

					
					if(pr == 6)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												printf("\n%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6]);


												mtr++;
											}				
										}
									}
								}
							}
						}
					}


					if(pr == 7)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													printf("\n%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7]);


													mtr++;
												}
											
											}				
										}
									}
								}
							}
						}
					}
					
					if(pr == 8)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														printf("\n%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8]);


														mtr++;
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}
					
					



					if(pr == 9)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															printf("\n%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9]);


															mtr++;
														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}

					if(pr == 10)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															for(e10 = 0;e10 < len2;e10++)
															{
																printf("\n%c%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10]);


																mtr++;
															}
														

														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}


					if(pr == 11)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															for(e10 = 0;e10 < len2;e10++)
															{
																for(e11 = 0;e11 < len2;e11++)
																{
																	printf("\n%c%c%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10],only[e11]);


																	mtr++;
																}
															}
														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}
					
					if(pr == 12)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															for(e10 = 0;e10 < len2;e10++)
															{
																for(e11 = 0;e11 < len2;e11++)
																{
																	for(e12 = 0;e12 < len2;e12++)
																	{
																		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10],only[e11],only[e12]);


																		mtr++;
																	}
																}
															}
														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}
					
					
					if(pr == 13)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															for(e10 = 0;e10 < len2;e10++)
															{
																for(e11 = 0;e11 < len2;e11++)
																{
																	for(e12 = 0;e12 < len2;e12++)
																	{
																		for(e13 = 0;e13 < len2;e13++)
																		{
																			printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10],only[e11],only[e12],only[e13]);


																			mtr++;
																		}
																	}
																}
															}
														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}

				
					time (&end);


				}
			}
			else if(pref5 == 'y' || pref5 == 'Y')
			{
				printf("\n[*] Enter The Folder Path  : ");
				scanf("%s",path2);



				printf("\n[*] Enter <file_name.txt> Or <file_name.lst> : ");
				scanf("%s",filename);


				strcat(strcat(strcat(path,path2),slash),filename);


				FILE *inputf;

				inputf = fopen(path,"w");

				if(inputf == NULL)
				{
					printf("\n\t\a\aError : File can not be created\n");
					goto FINISH ;
				}





				mtr = 0 ;

				printf("\n");

				for(pr = pref3;pr <= pref4;pr++)
				{
				
					time (&start);

					if(pr == 1)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							printf("\n%c",only[e1]);

							fprintf(inputf,"%c\n",only[e1]);

							mtr++;
						}
					}

					
					if(pr == 2)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								printf("\n%c%c",only[e1],only[e2]);

								fprintf(inputf,"%c%c\n",only[e1],only[e2]);

								mtr++;
							}
						}
					}

					if(pr == 3)	
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									printf("\n%c%c%c",only[e1],only[e2],only[e3]);

									fprintf(inputf,"%c%c%c\n",only[e1],only[e2],only[e3]);
									

									mtr++;
								}
							}
						}
					}
						
					if(pr == 4)	
					{	
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										printf("\n%c%c%c%c",only[e1],only[e2],only[e3],only[e4]);

										fprintf(inputf,"%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4]);


										mtr++;
									}
								}
							}
						}
					}
						


					if(pr == 5)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											printf("\n%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5]);

											fprintf(inputf,"%c%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4],only[e5]);


											mtr++;
										}
									}
								}
							}
						}
					}

					
					if(pr == 6)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												printf("\n%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6]);

												fprintf(inputf,"%c%c%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6]);

												mtr++;
											}				
										}
									}
								}
							}
						}
					}


					if(pr == 7)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													printf("\n%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7]);

													fprintf(inputf,"%c%c%c%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7]);

													mtr++;
												}
											
											}				
										}
									}
								}
							}
						}
					}
					
					if(pr == 8)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														printf("\n%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8]);

														fprintf(inputf,"%c%c%c%c%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8]);

														mtr++;
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}
					
					



					if(pr == 9)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															printf("\n%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9]);

															fprintf(inputf,"%c%c%c%c%c%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9]);

															mtr++;
														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}

					if(pr == 10)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															for(e10 = 0;e10 < len2;e10++)
															{
																printf("\n%c%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10]);

																fprintf(inputf,"%c%c%c%c%c%c%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10]);

																mtr++;
															}
														

														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}


					if(pr == 11)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															for(e10 = 0;e10 < len2;e10++)
															{
																for(e11 = 0;e11 < len2;e11++)
																{
																	printf("\n%c%c%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10],only[e11]);

																	fprintf(inputf,"%c%c%c%c%c%c%c%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10],only[e11]);

																	mtr++;
																}
															}
														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}
					
					if(pr == 12)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															for(e10 = 0;e10 < len2;e10++)
															{
																for(e11 = 0;e11 < len2;e11++)
																{
																	for(e12 = 0;e12 < len2;e12++)
																	{
																		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10],only[e11],only[e12]);

																		fprintf(inputf,"%c%c%c%c%c%c%c%c%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10],only[e11],only[e12]);

																		mtr++;
																	}
																}
															}
														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}
					
					
					if(pr == 13)
					{
						for(e1 = 0;e1 < len2;e1++)
						{
							for(e2 = 0;e2 < len2;e2++)
							{
								for(e3 = 0;e3 < len2;e3++)
								{
									for(e4 = 0;e4 < len2;e4++)
									{
										for(e5 = 0;e5 < len2;e5++)
										{	
											for(e6 = 0;e6 < len2;e6++)	
											{	
												for(e7 = 0;e7 < len2;e7++)
												{
													for(e8 = 0;e8 < len2;e8++)
													{
														for(e9 = 0;e9 < len2;e9++)
														{		
															for(e10 = 0;e10 < len2;e10++)
															{
																for(e11 = 0;e11 < len2;e11++)
																{
																	for(e12 = 0;e12 < len2;e12++)
																	{
																		for(e13 = 0;e13 < len2;e13++)
																		{
																			printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10],only[e11],only[e12],only[e13]);

																			fprintf(inputf,"%c%c%c%c%c%c%c%c%c%c%c%c%c\n",only[e1],only[e2],only[e3],only[e4],only[e5],only[e6],only[e7],only[e8],only[e9],only[e10],only[e11],only[e12],only[e13]);

																			mtr++;
																		}
																	}
																}
															}
														}
													}
												
												}
											
											}				
										}
									}
								}
							}
						}
					}

				
					time (&end);


				}

				fclose(inputf);


			}
			
			dif = difftime (end,start);

			printf("\n");



			printf("\n[*] Produced %d Different Passwords",mtr);

		  	while(1)
		  	{	
			  	if(dif > 3600)
				{	
				  	dif = dif - 3600;
				  	hour++;
				}
				else
				{
					break;
				}
		  	}

		  	while(1)
		  	{	
			  	if(dif > 60)
				{	
				  	dif = dif - 60;
				  	min++;
				}
				else
				{
					break;
				}
		  	}

		 	printf ("\n\a[*] Processing Time %d Hours %d Minutes %.2lf Seconds",hour, min , dif );


		 	FINISH : 


			printf("\n\n");

			printf("[*] Do You Want To Create Other Password List (Y/N)? ");
			scanf("%s",&prefloop);
			if(prefloop != 'Y' || prefloop != 'y' || prefloop !='N' || prefloop != 'n')
			{
				while(prefloop != 'Y' && prefloop != 'y' && prefloop !='N' && prefloop != 'n')
				{
					scanf("%s",&prefloop);
				}
			}


			printf("\n");

		}
		while(prefloop == 'Y' || prefloop == 'y');


}


