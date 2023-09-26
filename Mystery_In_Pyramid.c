#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#define _CRT_OBSOLETE_NO_WARNINGS

#define TRUE 1
#define FALSE 0

void GameScene1(void);
void GameScene2(void);
void GameScene3(void);
void GameScene4(void);
void GameScene_yes(void);
void GameScene_no(void);
void GameSceneQ1(void);
void GameSceneQ1_O(void);
void GameSceneQ2(void);
void GameSceneQ2_O(void);
void GameSceneQ3(void);
void GameSceneQ3_O(void);
void GameSceneQ4(void);
void GameSceneQ4_O(void);
void GameSceneQ5(void);
void GameSceneQ5_O(void);
void GameSceneQ6(void);
void GameSceneQ6_O(void);
void GameSceneQ7(void);
void GameSceneQ7_O(void);
void GameSceneQ8(void);
void GameSceneQ8_O(void);
void GameSceneQ9(void);
void GameSceneQ9_O(void);
void GameSceneQ10(void);
void GameSceneQ10_O(void);
void GameSceneEnding_1(void);
void GameSceneEnding_2(void);
void GameSceneEnding_3(void);
void GameSceneEnding_4(void);
void GameSceneEnding_5(void);
void GameSceneEnding_6(void);
void GameSceneEnding_7(void);
void GameSceneEnding_8(void);
void GameSceneEnding_9(void);
void GameSceneEnding_10(void);
void GameSceneEnding_11(void);
void GameSceneEnding_12(void);
void GameSceneEnding_13(void);
void GameSceneX(void);


void GameSceneX(void);

typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE; //커서 제거  

void setcursortype(CURSOR_TYPE c)
{
	CONSOLE_CURSOR_INFO CurInfo;
	switch (c)
	{
		case NOCURSOR:
			CurInfo.dwSize = 1; //커서 사이즈 
			CurInfo.bVisible = FALSE; // 커서 안보임 
			break;
		case SOLIDCURSOR:
			CurInfo.dwSize = 100;
			CurInfo.bVisible = TRUE;
			break;
		case NORMALCURSOR:
			CurInfo.dwSize = 20;
			CurInfo.bVisible = TRUE;
			break;		
	}
	SetConsoleCursorInfo (GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}

int main(void)
{
	
   setcursortype (NOCURSOR);
   char name, diffi;
   GameScene1();
   name = _getch();
   if (name == 'N' || name == 'n')
   {
      GameScene2();
      diffi = _getch();
      if (diffi == 'n' || diffi == 'N')
      {
         GameScene3();
         diffi = _getch();
         if (diffi == 'n' || diffi == 'N')  
         {
         	GameScene4();
         	diffi = _getch();
         	if (diffi == 'Y' || diffi == 'y')
         	{
         		GameScene_yes();
         		diffi = _getch();
         		if(diffi == 'n' || diffi == 'N' )
         		{
         		GameSceneQ1();
         		diffi = _getch();
         		if (diffi == 'O' || diffi == 'o' ) 
         		{
         			GameSceneQ1_O();
         			diffi = _getch();
         			if (diffi == 'n' || diffi == 'N') 
         			{
         				GameSceneQ2();
         				diffi = _getch();
         				if (diffi == 'o' || diffi == 'O') 
         				{
         					GameSceneQ2_O();
         					diffi = _getch();
         					if (diffi == 'n' || diffi == 'N') 
         					{
         						GameSceneQ3();
         						diffi = _getch();
         						if (diffi == 'o' || diffi == 'O')
         						{
         							GameSceneQ3_O();
         							diffi = _getch();
         							if (diffi == 'n' || diffi == 'N') 
         							{
         								GameSceneQ4();
										 diffi = _getch();
										 if (diffi == 'o' || diffi == 'O')
										 {
										 	GameSceneQ4_O();
										 	diffi = _getch();
										 	if (diffi == 'n' || diffi == 'N') 
										 	{
										 		GameSceneQ5();
										 		diffi = _getch();
										 		if (diffi == 'o' || diffi == 'O')
										 		{
										 			GameSceneQ5_O();
										 			diffi = _getch();
										 			if (diffi == 'n' || diffi == 'N') 
										 			{
										 				GameSceneQ6();
										 				diffi = _getch();
										 				if (diffi == 'o' || diffi == 'O') 
										 				{
										 					GameSceneQ6_O();
										 					diffi = _getch();
										 					if (diffi == 'n' || diffi == 'N') 
										 					{
										 						GameSceneQ7();
										 						diffi = _getch();
										 						if (diffi == 'o' || diffi == 'O')
										 						{
										 							GameSceneQ7_O();
										 							diffi = _getch();
										 							if (diffi == 'n' || diffi == 'N') 
										 							{
										 								GameSceneQ8();
										 								diffi = _getch();
										 								if (diffi == 'o' || diffi == 'O')
										 								{
										 									GameSceneQ8_O();
										 									diffi = _getch();
										 									if (diffi == 'n' || diffi == 'N') 
										 									{
										 										GameSceneQ9();
										 										diffi = _getch();
										 										if (diffi == 'o' || diffi == 'O')
										 										{
										 											GameSceneQ9_O();
										 											diffi = _getch();
										 											if (diffi == 'n' || diffi == 'N') 
										 											{
										 												GameSceneQ10();
										 												diffi = _getch();
										 												if (diffi == 'o' || diffi == 'O')
										 												{
										 													GameSceneQ10_O();
										 													diffi = _getch();
										 													if(diffi == 'n' || diffi == 'N')
										 													{
										 														GameSceneEnding_1();
										 														diffi = _getch();
										 														if(diffi == 'n' || diffi == 'N')
										 														{
										 															GameSceneEnding_2();
										 															diffi = _getch();
										 															if(diffi == 'n' || diffi == 'N')
										 															{
										 																GameSceneEnding_3();
										 													 			diffi = _getch();
										 																if(diffi == 'n' || diffi == 'N')
										 													 			{
											 													 			GameSceneEnding_4();
											 																diffi = _getch();
										 																	if(diffi == 'n' || diffi == 'N')
										 																	{
										 																		GameSceneEnding_5();
										 																		diffi = _getch();
										 																		if(diffi == 'n' || diffi == 'N')
										 																		{
										 																			GameSceneEnding_6();
										 																			diffi = _getch();
										 																			if(diffi == 'n' || diffi == 'N')
										 																			{
										 																				GameSceneEnding_7();
										 																				diffi = _getch();
										 																				if(diffi == 'n' || diffi == 'N')
										 																				{
										 																					GameSceneEnding_8();
										 																					diffi = _getch();
										 																					if(diffi == 'n' || diffi == 'N')
										 																					{
										 																						GameSceneEnding_9();
										 																						diffi = _getch();
										 																						if(diffi == 'n' || diffi == 'N')
										 																						{
										 																							GameSceneEnding_10();
										 																							diffi = _getch();
										 																							if(diffi == 'n' || diffi == 'N')
										 																							{
										 																								GameSceneEnding_11();
										 																								diffi = _getch();
										 																								if(diffi == 'n' || diffi == 'N')
										 																								{
										 																									GameSceneEnding_12();
										 																									diffi = _getch();
										 																									if(diffi == 'n' || diffi == 'N')
										 																									{
										 																										GameSceneEnding_13();
																																				diffi = _getch();	
																																				if(diffi == 'n' || diffi == 'N')
																																				{
																																					GameSceneX();
																																					diffi = _getch();
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
																						}
																						else if(diffi == 'x' || diffi == 'X')
																						{
																							GameSceneX();
														 									diffi = _getch();
																						}
																					}
																				}
																				else if(diffi == 'x' || diffi == 'X')
																				{
																					GameSceneX();
														 							diffi = _getch();
																				}
																			}
																		}
																		else if(diffi == 'x' || diffi == 'X')
																		{
																			GameSceneX();
														 					diffi = _getch();
																		}
																	}
																}
																else if(diffi == 'x' || diffi == 'X')
																{
																	GameSceneX();
														 			diffi = _getch();
																}
															}
														 }
														 else if(diffi == 'x' || diffi == 'X')
														 {
														 	GameSceneX();
														 	diffi = _getch();
														 }
													 }
												}
												else if(diffi == 'x' || diffi == 'X')
												{
													GameSceneX();
													diffi = _getch();
												}
											}
										 }
										 else if(diffi == 'x' || diffi == 'X')
										 {
										 	GameSceneX();
										 	diffi = _getch();
										 }
									 }
								 }
								 else if(diffi == 'x' || diffi == 'X')
								 {
								 	GameSceneX();
								 	diffi = _getch();
								 }
							}
         						
						}
						else if(diffi == 'x' || diffi == 'X')
						{
							GameSceneX();
							diffi = _getch();
						}
					}
					
				}
				else if(diffi == 'x' || diffi == 'X')
				{
					GameSceneX();
					diffi = _getch();
				}
			}
				
			}
			else if(diffi == 'N' || diffi == 'n')
			{
				GameScene_no();
				diffi = _getch();
			}
		 }
		 
      }
      
   }
   return 0;
}

void GameScene1(void)
{

   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("                                                                            \n");                                                             
   printf("  ■■    ■■ ■    ■  ■■  ■■■■ ■■■ ■■■  ■    ■             \n");
   printf("  ■ ■■■ ■  ■■■  ■  ■    ■    ■     ■   ■  ■■■              \n");
   printf("  ■   ■   ■    ■     ■       ■    ■■■ ■■■     ■                \n");
   printf("  ■        ■    ■      ■      ■    ■     ■ ■      ■                \n");
   printf("  ■        ■    ■    ■  ■    ■    ■     ■  ■     ■                \n");
   printf("  ■        ■    ■     ■■     ■    ■■■ ■   ■    ■       IN THE   \n");
   printf("                                                                            \n");
   printf("                                                                            \n");
   printf("                                                                            \n");
   printf("                ■■■ ■    ■ ■■■     ■    ■■    ■■ ■■■ ■■■ \n");
   printf("                ■   ■ ■■■  ■   ■   ■■   ■ ■■■ ■   ■   ■   ■\n");
   printf("                ■■■    ■    ■■■   ■  ■  ■   ■   ■   ■   ■   ■\n");
   printf("                ■        ■    ■ ■    ■■■  ■        ■   ■   ■   ■\n");
   printf("                ■        ■    ■  ■  ■    ■ ■        ■   ■   ■   ■\n");
   printf("                ■        ■    ■   ■ ■    ■ ■        ■ ■■■ ■■■ \n\n\n\n\n");
   printf("                                        ▣\n");
   printf("                                       ▣▣\n");
   printf("                                      ▣▣▣            컴퓨터소프트웨어학부\n");
   printf("                                     ▣▣▣▣                 21113668      \n");
   printf("                                    ▣▣▣▣▣                 윤재이       \n");
   printf("                                   ▣▣▣▣▣▣\n");
   printf("                                  ▣▣▣▣▣▣▣\n");
   printf("                                 ▣▣▣▣▣▣▣▣\n");
   printf("                                ▣▣▣▣▣▣▣▣▣\n");
   printf("                               ▣▣▣▣▣▣▣▣▣▣        PRESS 'N' BUTTON \n");
   printf("                              ▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("                             ▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("                            ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("                           ▣▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("                          ▣▣▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("                         ▣▣▣▣▣ ▣      ▣ ▣▣▣▣▣\n");
   printf("━━━━━━━━━━━━━━━━━━━━━━━ ▣▣▣▣▣▣▣      ▣▣▣▣▣▣▣━━━━━━━━━━━━━━━━━━━━━━━\n");
   
}

void GameScene2(void)
{
	Beep(290, 150); //레
   

   /*
   Beep(260, 200); //도
   Beep(290, 200); //레
   Beep(330, 200); //미
   Beep(340, 200); //파
   Beep(380, 200); //솔                 
   Beep(430, 200); //라
   Beep(490, 200); //시
   Beep(510, 200); //높은 도
   */

   system("cls");
   system("mode con cols=81 lines=40");
   printf("■■■■■■■■■■■■■                             ■■■■■■■■■■■■■\n");
   printf("■■■    ■■■■■■■■                             ■■■■■■■■    ■■■\n");
   printf("■■■          ■■■■■                             ■■■■■          ■■■\n");
   printf("■    ■          ■    ■                             ■    ■          ■    ■\n");
   printf("■■  ■    ▣▣  ■  ■■                             ■■  ■  ▣▣    ■  ■■\n");
   printf("■■  ■          ■  ■■                             ■■  ■          ■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■                  ■■                             ■■                  ■■\n");
   printf("■■■■          ■■■■                             ■■■■          ■■■■\n");
   printf("■■■■          ■■■■┏┏┏┏┏┏┏┏━━━━━━━━━━━━┓┓┓┓┓┓┓┓ ■■■■          ■■■■\n");
   printf("■■■■              ■■┃┃┃┃┃┃┃┃            ┃┃┃┃┃┃┃┃ ■■              ■■■■\n");
   printf("■■■■    ■        ■■┃┃┃┃┃┃┣┻━━━━━━━━━━━━┻┫┃┃┃┃┃┃ ■■        ■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┃┃              ┃┃┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┣┻━━━━━━━━━━━━━━┻┫┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■      ■■■    ■■┃┃┃┃┃┃                ┃┃┃┃┃┃ ■■    ■■■      ■■■\n");
   printf("■          ■■■      ■┃┃┃┃┣┻━━━━━━━━━━━━━━━━┻┫┃┃┃┃ ■      ■■■          ■\n");
   printf("■■■■■■■■■■■■■┃┃┃┃┃                  ┃┃┃┃┃ ■■■■■■■■■■■■■\n");
   printf("■■■■■■■■■■■■■┃┃┃┣┻━━━━━━━━━━━━━━━━━━┻┫┃┃┃ ■■■■■■■■■■■■■\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃┃                    ┃┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┣┻━━━━━━━━━━━━━━━━━━━━┻┫┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃                      ┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┣┻━━━━━━━━━━━━━━━━━━━━━━┻┫┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃                        ┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("━━━━━━━━━━━━━━━━━━━━━━━━━━┛┻━━━━━━━━━━━━━━━━━━━━━━━━┻┗━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                        안녕하세요                       ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
  
   
   


}

void GameScene3(void)
{
 
  
  Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   printf("■■■■■■■■■■■■■                             ■■■■■■■■■■■■■\n");
   printf("■■■    ■■■■■■■■                             ■■■■■■■■    ■■■\n");
   printf("■■■          ■■■■■                             ■■■■■          ■■■\n");
   printf("■    ■          ■    ■                             ■    ■          ■    ■\n");
   printf("■■  ■    ▣▣  ■  ■■                             ■■  ■  ▣▣    ■  ■■\n");
   printf("■■  ■          ■  ■■                             ■■  ■          ■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■                  ■■                             ■■                  ■■\n");
   printf("■■■■          ■■■■                             ■■■■          ■■■■\n");
   printf("■■■■          ■■■■┏┏┏┏┏┏┏┏━━━━━━━━━━━━┓┓┓┓┓┓┓┓ ■■■■          ■■■■\n");
   printf("■■■■              ■■┃┃┃┃┃┃┃┃            ┃┃┃┃┃┃┃┃ ■■              ■■■■\n");
   printf("■■■■    ■        ■■┃┃┃┃┃┃┣┻━━━━━━━━━━━━┻┫┃┃┃┃┃┃ ■■        ■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┃┃              ┃┃┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┣┻━━━━━━━━━━━━━━┻┫┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■      ■■■    ■■┃┃┃┃┃┃                ┃┃┃┃┃┃ ■■    ■■■      ■■■\n");
   printf("■          ■■■      ■┃┃┃┃┣┻━━━━━━━━━━━━━━━━┻┫┃┃┃┃ ■      ■■■          ■\n");
   printf("■■■■■■■■■■■■■┃┃┃┃┃                  ┃┃┃┃┃ ■■■■■■■■■■■■■\n");
   printf("■■■■■■■■■■■■■┃┃┃┣┻━━━━━━━━━━━━━━━━━━┻┫┃┃┃ ■■■■■■■■■■■■■\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃┃                    ┃┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┣┻━━━━━━━━━━━━━━━━━━━━┻┫┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃                      ┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┣┻━━━━━━━━━━━━━━━━━━━━━━┻┫┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃                        ┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("━━━━━━━━━━━━━━━━━━━━━━━━━━┛┻━━━━━━━━━━━━━━━━━━━━━━━━┻┗━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃        문제를 풀며 한 층씩 올라가 10층에 도달하면       ┃\n");
   printf("  ■■    ■    ■■ ┃                 이 게임은 끝이 납니다.                  ┃\n");
   printf("  ■■■■■■■■■ ┃                                                         ┃\n"); 
   printf("    ■■■  ■■■   ┃         한 번이라도 틀릴 경우 1층으로 떨어지지만        ┃\n");
   printf("      ■■■■■     ┃         제한시간은 없으니 천천히 푸시길 바랍니다.       ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
  

}

void GameScene4(void)
{
	Beep(290, 150); //레
   system("cls");  
   system("mode con cols=81 lines=40");
   printf("■■■■■■■■■■■■■                             ■■■■■■■■■■■■■\n");
   printf("■■■    ■■■■■■■■                             ■■■■■■■■    ■■■\n");
   printf("■■■          ■■■■■                             ■■■■■          ■■■\n");
   printf("■    ■          ■    ■                             ■    ■          ■    ■\n");
   printf("■■  ■    ▣▣  ■  ■■                             ■■  ■  ▣▣    ■  ■■\n");
   printf("■■  ■          ■  ■■                             ■■  ■          ■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■                  ■■                             ■■                  ■■\n");
   printf("■■■■          ■■■■                             ■■■■          ■■■■\n");
   printf("■■■■          ■■■■┏┏┏┏┏┏┏┏━━━━━━━━━━━━┓┓┓┓┓┓┓┓ ■■■■          ■■■■\n");
   printf("■■■■              ■■┃┃┃┃┃┃┃┃            ┃┃┃┃┃┃┃┃ ■■              ■■■■\n");
   printf("■■■■    ■        ■■┃┃┃┃┃┃┣┻━━━━━━━━━━━━┻┫┃┃┃┃┃┃ ■■        ■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┃┃              ┃┃┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┣┻━━━━━━━━━━━━━━┻┫┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■      ■■■    ■■┃┃┃┃┃┃                ┃┃┃┃┃┃ ■■    ■■■      ■■■\n");
   printf("■          ■■■      ■┃┃┃┃┣┻━━━━━━━━━━━━━━━━┻┫┃┃┃┃ ■      ■■■          ■\n");
   printf("■■■■■■■■■■■■■┃┃┃┃┃                  ┃┃┃┃┃ ■■■■■■■■■■■■■\n");
   printf("■■■■■■■■■■■■■┃┃┃┣┻━━━━━━━━━━━━━━━━━━┻┫┃┃┃ ■■■■■■■■■■■■■\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃┃                    ┃┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┣┻━━━━━━━━━━━━━━━━━━━━┻┫┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃                      ┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┣┻━━━━━━━━━━━━━━━━━━━━━━┻┫┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃                        ┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("━━━━━━━━━━━━━━━━━━━━━━━━━━┛┻━━━━━━━━━━━━━━━━━━━━━━━━┻┗━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                         가실까요?                       ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃         가보자고 (Y)                   안가요 (N)       ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                                     ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameScene_yes(void)
{
   Beep(260, 180); //도 
   Beep(330, 180); //미
   Beep(380, 180); //솔
   Beep(490, 200); //시
   system("cls");
   system("mode con cols=81 lines=40");
   printf("■■■■■■■■■■■■■                             ■■■■■■■■■■■■■\n");
   printf("■■■    ■■■■■■■■                             ■■■■■■■■    ■■■\n");
   printf("■■■          ■■■■■                             ■■■■■          ■■■\n");
   printf("■    ■          ■    ■                             ■    ■          ■    ■\n");
   printf("■■  ■    ▣▣  ■  ■■                             ■■  ■  ▣▣    ■  ■■\n");
   printf("■■  ■          ■  ■■                             ■■  ■          ■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■                  ■■                             ■■                  ■■\n");
   printf("■■■■          ■■■■                             ■■■■          ■■■■\n");
   printf("■■■■          ■■■■┏┏┏┏┏┏┏┏━━━━━━━━━━━━┓┓┓┓┓┓┓┓ ■■■■          ■■■■\n");
   printf("■■■■              ■■┃┃┃┃┃┃┃┃            ┃┃┃┃┃┃┃┃ ■■              ■■■■\n");
   printf("■■■■    ■        ■■┃┃┃┃┃┃┣┻━━━━━━━━━━━━┻┫┃┃┃┃┃┃ ■■        ■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┃┃              ┃┃┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┣┻━━━━━━━━━━━━━━┻┫┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■      ■■■    ■■┃┃┃┃┃┃                ┃┃┃┃┃┃ ■■    ■■■      ■■■\n");
   printf("■          ■■■      ■┃┃┃┃┣┻━━━━━━━━━━━━━━━━┻┫┃┃┃┃ ■      ■■■          ■\n");
   printf("■■■■■■■■■■■■■┃┃┃┃┃                  ┃┃┃┃┃ ■■■■■■■■■■■■■\n");
   printf("■■■■■■■■■■■■■┃┃┃┣┻━━━━━━━━━━━━━━━━━━┻┫┃┃┃ ■■■■■■■■■■■■■\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃┃                    ┃┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┣┻━━━━━━━━━━━━━━━━━━━━┻┫┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃                      ┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┣┻━━━━━━━━━━━━━━━━━━━━━━┻┫┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃                        ┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("━━━━━━━━━━━━━━━━━━━━━━━━━━┛┻━━━━━━━━━━━━━━━━━━━━━━━━┻┗━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                                                         ┃\n"); 
   printf("    ■■■  ■■■   ┃           WELCOME TO MYSTERY IN THE PYRAMID!!!          ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameScene_no(void)
{
   Beep(260, 180); //도 
   Beep(330, 180); //미
   Beep(380, 180); //솔
   Beep(490, 200); //시
      system("cls");
   system("mode con cols=81 lines=40");
   printf("■■■■■■■■■■■■■                             ■■■■■■■■■■■■■\n");
   printf("■■■    ■■■■■■■■                             ■■■■■■■■    ■■■\n");
   printf("■■■          ■■■■■                             ■■■■■          ■■■\n");
   printf("■    ■          ■    ■                             ■    ■          ■    ■\n");
   printf("■■  ■    ▣▣  ■  ■■                             ■■  ■  ▣▣    ■  ■■\n");
   printf("■■  ■          ■  ■■                             ■■  ■          ■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■  ■■      ■■  ■■                             ■■  ■■      ■■  ■■\n");
   printf("■■                  ■■                             ■■                  ■■\n");
   printf("■■■■          ■■■■                             ■■■■          ■■■■\n");
   printf("■■■■          ■■■■┏┏┏┏┏┏┏┏━━━━━━━━━━━━┓┓┓┓┓┓┓┓ ■■■■          ■■■■\n");
   printf("■■■■              ■■┃┃┃┃┃┃┃┃            ┃┃┃┃┃┃┃┃ ■■              ■■■■\n");
   printf("■■■■    ■        ■■┃┃┃┃┃┃┣┻━━━━━━━━━━━━┻┫┃┃┃┃┃┃ ■■        ■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┃┃              ┃┃┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■■    ■■■    ■■┃┃┃┃┃┣┻━━━━━━━━━━━━━━┻┫┃┃┃┃┃ ■■    ■■■    ■■■■\n");
   printf("■■■      ■■■    ■■┃┃┃┃┃┃                ┃┃┃┃┃┃ ■■    ■■■      ■■■\n");
   printf("■          ■■■      ■┃┃┃┃┣┻━━━━━━━━━━━━━━━━┻┫┃┃┃┃ ■      ■■■          ■\n");
   printf("■■■■■■■■■■■■■┃┃┃┃┃                  ┃┃┃┃┃ ■■■■■■■■■■■■■\n");
   printf("■■■■■■■■■■■■■┃┃┃┣┻━━━━━━━━━━━━━━━━━━┻┫┃┃┃ ■■■■■■■■■■■■■\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃┃                    ┃┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┣┻━━━━━━━━━━━━━━━━━━━━┻┫┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃┃                      ┃┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┣┻━━━━━━━━━━━━━━━━━━━━━━┻┫┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("▣▣▣▣▣▣▣▣▣▣▣▣▣┃┃                        ┃┃ ▣▣▣▣▣▣▣▣▣▣▣▣▣\n");
   printf("━━━━━━━━━━━━━━━━━━━━━━━━━━┛┻━━━━━━━━━━━━━━━━━━━━━━━━┻┗━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                  나중에 다시 도전하세요                 ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
  
}

void GameSceneQ1(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   1 FLOOR     \n");                   
   printf(" ▣HINT_KEY_01 : 제작자 학번 앞 두자리                                           \n");
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_01\n\n\t\t한 아이가 있었다.\n\t\t그 아이의 나이는\n\t\t아이의 아빠와 엄마의 나이 차가 아이의 나이이다.\n\t\t그리고 아이의 언니가 있다.\n\t\t언니의 나이는 아이의 나이의 2배이고, 엄마의 3분의 1이다.\n\t\t5년 후 아이의 나이는 지금의 언니의 나이와 같아진다.\n\t\t아이의 나이는 몇 살인가?\n\t\t(숫자만 입력하시오)";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
   printf("\n\n\t\t▣ANSWER_01 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n\n\n");
   if(a==5) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                         정답입니다!                     ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 21) 
   {
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   1 FLOOR     \n");                   
   printf(" ▣HINT_KEY_01 : 제작자 학번 앞 두자리                                           \n");
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_01\n\n\t\t한 아이가 있었다.\n\t\t그 아이의 나이는\n\t\t아이의 아빠와 엄마의 나이 차가 아이의 나이이다.\n\t\t그리고 아이의 언니가 있다.\n\t\t언니의 나이는 아이의 나이의 2배이고, 엄마의 3분의 1이다.\n\t\t5년 후 아이의 나이는 지금의 언니의 나이와 같아진다.\n\t\t아이의 나이는 몇 살인가?\n\t\t(숫자만 입력하시오)");
   char *script = "\n\n\t\t▣HINT_01\n\n\t\t정보정리가 우선입니다.\n\t\t부모의 나이 차가 아닌 언니의 나이가 포인트\n\t\t언니의 나이는 아이의 2배\n\t\t5년 후 언니와 아이의 나이는 어떻게 될까요\n\t\t";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_01 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   if(a==5) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                         정답입니다!                     ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	} 
	else 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                     힌트를 보시고도..                   ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
	}
	else 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                     아쉽게도 틀렸네요                   ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	
}

void GameSceneQ1_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   1 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
    printf("\t\t▣EXPLAIN_01\n\n\t\t\n\t\t못 받은 아이도 있다는 뜻이다.\n\t\t빨간 모자를 쓴 아이가 5명 이상이라면\n\t\t모두가 빨간 풍선을 받을 수 없을 것이다.\n\t\t즉, 빨간 모자를 쓴 아이는 4명,\n\t\t빨간 풍선을 받은 아이는 6명이 된다.\t\t\n\t\t");
    printf("\n\n\n\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃                     다음 문제입니다                     ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}



void GameSceneQ2(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   2 FLOOR     \n");                  
   printf(" ▣HINT_KEY_02 : 신서유기 마지막 시즌                                            \n");
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_02\n\n\t\t어느 열차에 몇 명의 승객이 타고있었다.\n\t\t첫 역에 도착하자 승객 전체의 6분의 1이 내렸다.\n\t\t그 다음 역에서는\n\t\t남아 있는 승객 전체의 5분의 1이 내렸으며\n\t\t같은 방식으로 그 다음에는 4분의 1, 3분의 1, 2분의 1이 내렸고,\n\t\t마지막 역에서는 모든 승객이 내렸다.\n\t\t운행 중에 이 열차를 새롭게 탄 승객이 없다고 하면,\n\t\t처음에 타고 있던 승객은 몇 명일까?\n\t\t생각할 수 있는 인원수 중 가장 적은 수를 답하라\n\t\t(숫자만 입력하시오)\n";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
   printf("\n\t\t▣ANSWER_02 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n");
	if(a==6) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                           맞아요!!                      ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 8) 
   {
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   2 FLOOR     \n");                   
   printf(" ▣HINT_KEY_02 : 신서유기 마지막 시즌                                            \n");
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_02\n\n\t\t어느 열차에 몇 명의 승객이 타고있었다.\n\t\t첫 역에 도착하자 승객 전체의 6분의 1이 내렸다.\n\t\t그 다음 역에서는\n\t\t남아 있는 승객 전체의 5분의 1이 내렸으며\n\t\t같은 방식으로 그 다음에는 4분의 1, 3분의 1, 2분의 1이 내렸고,\n\t\t마지막 역에서는 모든 승객이 내렸다.\n\t\t운행 중에 이 열차를 새롭게 탄 승객이 없다고 하면,\n\t\t처음에 타고 있던 승객은 몇 명일까?\n\t\t생각할 수 있는 인원수 중 가장 적은 수를 답하라\n\t\t(숫자만 입력하시오)\n");
   char *script = "\n\t\t▣HINT_02\n\n\t\t승객은 늘어나지 않았습니다\n\t\t적당한 숫자를 대입해서 계산하면 법칙이 보일 것 입니다.\n";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_02 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   if(a==6) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                           맞아요!!                      ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	} 
	else 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                    힌트가 어렵나요..?                   ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
	}
else 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                          아까비..                       ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
}

void GameSceneQ2_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   2 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
    printf("\t\t▣EXPLAIN_02\n\n\t\t\n\t\t처음 타고 있던 승객이 6명이라면\n\t\t역마다 1명씩 내린 셈이 된다\n\t\t승객 전체의 인원 수도 줄어든 다는 것을 생각하면\n\t\t쉬운 문제이다\n\n\t\t");
    printf("\n\n\n\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃                        NEXT LEVEL~                      ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneQ3(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   3 FLOOR     \n");                  
   printf(" ▣HINT_KEY_03 : '사과'의 획수                                                   \n");
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_03\n\n\t\t죠니와 토마스가 각각 사과 몇 개를 가지고 있다.\n\t\t이 상태에서 죠니가 토마스에게 1개를 주면,\n\t\t두 사람이 가진 사과 개수는 같아진다.\n\t\t다시 처음으로 되돌린 후,\n\t\t토마스가 죠니에게 2개를 주면 죠니가 가진 사과는\n\t\t토마스가 가진 사과의 3배가 된다고 한다.\n\t\t그럼 죠니와 토마스는 처음에\n\t\t가지고 있던 사과 개수의 합은?\n\t\t(숫자만 입력하시오)\n";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
   printf("\n\t\t▣ANSWER_03 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n\n");
	if(a==12) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                           RIGHT!!                       ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 9) 
   {
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   3 FLOOR     \n");                   
   printf(" ▣HINT_KEY_03 : '사과'의 획수                                                   \n");	
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_03\n\n\t\t죠니와 토마스가 각각 사과 몇 개를 가지고 있다.\n\t\t이 상태에서 죠니가 토마스에게 1개를 주면,\n\t\t두 사람이 가진 사과 개수는 같아진다.\n\t\t다시 처음으로 되돌린 후,\n\t\t토마스가 죠니에게 2개를 주면 죠니가 가진 사과는\n\t\t토마스가 가진 사과의 3배가 된다고 한다.\n\t\t그럼 죠니와 토마스는 처음에\n\t\t가지고 있던 사과 개수의 합은?\n\t\t(숫자만 입력하시오)\n");
   char *script = "\n\t\t▣HINT_03\n\n\t\t처음에 죠니가 가지고 있던 사과의 개수는\n\t\t토마스보다 2개 많다는 뜻이다.\n\t\t토마스가 죠니에게 2개를 주면 죠니의 사과는\n\t\t토마스의 3배가 된다.\n";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_03 : ");
   scanf("%d", &a);
   printf("\n");

   if(a==12) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                           RIGHT!!                       ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	} 
	else 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                     사과를 드릴까요..?                  ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
	}
else 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                   사과 하나 먹고 오세요                 ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
}

void GameSceneQ3_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   3 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
    printf("\t\t▣EXPLAIN_03\n\n\t\t\n\t\t죠니는 7개, 토마스가 5개를 가지고 있다\n\t\t\n\t\t죠니가 토마스에게 1개를 주면 두 사람 다 6개를 가진다\n\t\t토마스가 죠니에게 2개를 주면\n\t\t죠니가 9개, 토마스가 3개를 가지며\n\t\t3배의 차이가 생긴다\n\t\t죠니와 토마스가 가진 사과 개수의 합은 12개 이다.\n\t\t");
    printf("\n\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃                    사과 맛있었나요?                     ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneQ4(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   4 FLOOR     \n");                  
   printf(" ▣HINT_KEY_04 : 금의 원소번호                                                   \n");	
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_04\n\n\t\t5개의 자루에 금화가 10개씩 들어있다.\n\t\t이 중 하나의 자루는 오로지 무게가 모자라는 가짜 금화로만\n\t\t채워져 있다.\n\t\t진짜 금화 하나의 무게는 10그램인데\n\t\t가짜 금화는 이보다 1그램 가볍다.\n\t\t200그램까지 잴 수 있는 저울을 사용해서\n\t\t최소 몇 번을 재면 가짜 금화가 든 자루를 밝혀낼 수 있을까?\n\t\t횟수를 대답해 보자?\n\t\t(숫자만 입력하시오)\n";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
   printf("\n\t\t▣ANSWER_04 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n\n");
	if(a==1) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                   이제 이 금화는 제겁니다               ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 79) 
{
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   4 FLOOR     \n");                   
   printf(" ▣HINT_KEY_04 : 금의 원소번호                                                   \n");
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_04\n\n\t\t5개의 자루에 금화가 10개씩 들어있다.\n\t\t이 중 하나의 자루는 오로지 무게가 모자라는 가짜 금화로만\n\t\t채워져 있다.\n\t\t진짜 금화 하나의 무게는 10그램인데\n\t\t가짜 금화는 이보다 1그램 가볍다.\n\t\t200그램까지 잴 수 있는 저울을 사용해서\n\t\t최소 몇 번을 재면 가짜 금화가 든 자루를 밝혀낼 수 있을까?\n\t\t횟수를 대답해 보자?\n\t\t(숫자만 입력하시오)\n");
   char *script = "\n\t\t▣HINT_04\n\n\t\t가짜 자루의 모든 금화는 가짜이다\n\t\t5번에 구별할 수 있지만 그러면 너무 쉽다.\n\t\t모든 자루를 한 번에 재면 무게를 초과 한다.\n\t\t";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_04 : ");
   scanf("%d", &a);
   printf("\n\n");

   if(a==1) 
{
	
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                   이제 이 금화는 제겁니다               ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
} 
	else 
  	 {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃              전자저울을 가져다 놔야 겠네요              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
}
	else 
	{
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                  무게감을 한 번 느껴볼까요              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
}

void GameSceneQ4_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   4 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
    printf("\t\t▣EXPLAIN_04\n\n\t\t\n\t\t1에서 5까지의 숫자가 쓰인 자루에서\n\t\t각 자루의 번호와 같은 개수의 금화를 꺼낸다\n\t\t그러면 총 15개가 되고, 이를 한 꺼번에 저울에 단다\n\t\t1개당 10그램이므로 총 150그램이 되어야 하지만\n\t\t무게는 가짜의 개주만큼 가벼워 진다.\n\t\t무게에서 모자라는 숫자가 바로 가짜 금화의 개수가 되고\n\t\t이 숫자와 같은 번호의 자루가 가짜이다\n\t\t");
    printf("\n\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃                    여기까지 오셨군요!                   ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneQ5(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   5 FLOOR     \n");                 
   printf(" ▣HINT_KEY_05 : 십이지신 중 말은 몇번째 인가?                                   \n");
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_05\n\n\t\t속도가 각각 다른 4마리의 말이 있다.\n\t\t이 말들이 A 지점에서 B 지점까지 가는데에는\n\t\t각각 1시간, 2시간, 4시간, 6시간이 걸린다고 한다.\n\t\t어느 날, 모든 말들을 A에서 B로 이동시키게 되었다.\n\t\t하지만 한 번에 2마리밖에 데려갈 수 없고,\n\t\tB에서 A로 돌아올 때에는 반드시\n\t\t말 한마리를 타고 와야 한다.\n\t\t이동시간을 느린말에 맞춘다고 하면 최단 몇 시간이 걸릴까?\n\t\t(숫자만 입력하시오)";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
  printf("\n\n\t\t▣ANSWER_05 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n\n");
	if(a==13) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                       다그닥 다그닥                     ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 7) 
{
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   5 FLOOR     \n");                   
   printf(" ▣HINT_KEY_05 : 십이지신 중 말은 몇번째 인가?                                   \n");
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_05\n\n\t\t속도가 각각 다른 4마리의 말이 있다.\n\t\t이 말들이 A 지점에서 B 지점까지 가는데에는\n\t\t각각 1시간, 2시간, 4시간, 6시간이 걸린다고 한다.\n\t\t어느 날, 모든 말들을 A에서 B로 이동시키게 되었다.\n\t\t하지만 한 번에 2마리밖에 데려갈 수 없고,\n\t\tB에서 A로 돌아올 때에는 반드시\n\t\t말 한마리를 타고 와야 한다.\n\t\t이동시간을 느린말에 맞춘다고 하면 최단 몇 시간이 걸릴까?\n\t\t(숫자만 입력하시오)\n");
   char *script = "\n\t\t▣HINT_05\n\n\t\t돌아올 때 시간이 짧은 말을 쓰면\n\t\t시간이 더 지체된다.\n\t\tA에서 B까지 세 번, B에서 A까지는 그보다 적다.\n\t\t";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_05 : ");
   scanf("%d", &a);
   printf("\n\n");

   if(a==13) 
{
	
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                       다그닥 다그닥                     ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
} 
	else 
  	 {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                   말들이 이제 힘들다네요                ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
}
	else 
	{
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                        낙마하셨네요                     ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
}

void GameSceneQ5_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   5 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
    printf("\t\t▣EXPLAIN_05\n\n\t\t\n\t\t우선 1, 2시간짜리 말을 타고 가서\n\t\t1시간 짜리 말을 타고 돌아온다\n\t\t그럼 3시간이 걸리게 되고\n\t\t그 다음 4, 6시간짜리 말을 타고 가서\n\t\t2시간 짜리 말을 타고 돌아온다.\n\t\t8시간이 추가되어 11시간이 된다.\n\t\t마지막으로 A로 돌아와있는\n\t\t1시간짜리 말과 2시간짜리 말을 타고 간다.\n\t\t그럼 2시간이 추가되어 총 13시간이 걸리게 된다");
    printf("\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃                       말타고 가시죠                     ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneQ6(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   6 FLOOR     \n");                 
   printf(" ▣HINT_KEY_06 : 가수 '빅뱅'의 노래 중 blue는 몇 년도에 나온 노래인가            \n");
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_06\n\n\t\t유치원 선생님이 10명의 아이들에게\n\t\t눈을 감게 한 후 1명씩 모자를 씌웠다.\n\t\t[눈을 뜨고 주변 친구들의 모자를 보도록 해요.\n\t\t빨간 모자를 쓴 친구를 4명 이상 발견한 어린이에게는\n\t\t빨간 풍선을, 발견하지 못한 어린이에게는 파란 풍선을 주겠어요]\n\t\t눈을 뜬 10명의 아이 중 일부는\n\t\t빨간 풍선을 받았다고 하는데\n\t\t그것은 과연 몇 명일까?\n\t\t(숫자만 입력하시오)";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
  printf("\n\n\t\t▣ANSWER_06 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n\n");
	if(a==6) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                   이제 모자 벗어도 됩니다!              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 2012) 
{
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   6 FLOOR     \n");                   
   printf(" ▣HINT_KEY_06 : 가수 '빅뱅'의 노래 중 blue는 몇 년도에 나온 노래인가            \n");
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_06\n\n\t\t유치원 선생님이 10명의 아이들에게\n\t\t눈을 감게 한 후 1명씩 모자를 씌웠다.\n\t\t[눈을 뜨고 주변 친구들의 모자를 보도록 해요.\n\t\t빨간 모자를 쓴 친구를 4명 이상 발견한 어린이에게는\n\t\t빨간 풍선을, 발견하지 못한 어린이에게는 파란 풍선을 주겠어요]\n\t\t눈을 뜬 10명의 아이 중 일부는\n\t\t빨간 풍선을 받았다고 하는데\n\t\t그것은 과연 몇 명일까?\n\t\t(숫자만 입력하시오)\n");
   char *script = "\n\t\t▣HINT_06\n\n\t\t빨간 모자는 4명 이상\n\t\t빨간 풍선을 못 받은 아이도 있다.\n\t\t빨간 모자를 쓴아이의 수를 역으로 생각해보자\n\t\t";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_06 : ");
   scanf("%d", &a);
   printf("\n\n");

   if(a==6) 
{
	
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                   이제 모자 벗어도 됩니다!              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
} 
	else 
  	 {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                     지나가버린 풍선                     ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
}
	else 
	{
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                빨간모자 줄까 파란모자 줄까              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
}

void GameSceneQ6_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   6 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
   printf("\t\t▣EXPLAIN_06\n\n\t\t10명 중 일부가 빨간 풍선을 받았다는 말은,\n\t\t못 받은 아이도 있다는 뜻이다.\n\t\t빨간 모자를 쓴 아이가 5명 이상이라면\n\t\t모두가 빨간 풍선을 받을 수 없을 것이다.\n\t\t즉, 빨간 모자를 쓴 아이는 4명,\n\t\t빨간 풍선을 받은 아이는 6명이 된다.\t\t\n\t\t");
    printf("\n\n\n\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃                   풍선이 날아가 버렸네요                ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneQ7(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   7 FLOOR     \n");                 
   printf(" ▣HINT_KEY_07 : 트럼프 카드는 총 몇장으로 구성되어있나?                         \n");
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_07\n\n\t\t서로 다른 1자릿수의 숫자가 쓰인\n\t\t2장의 카드가 있다. 이 카드를 나열해서\n\t\t2자리의 숫자를 만들었다. 다음으로,\n\t\t이 카드 2장을 반대로 나열해서\n\t\t다른 2자리의 숫자를 만들었다.\n\t\t이렇게 만들어진 2자리의 숫자 2개를\n\t\t더한 값은 다음 중 어느 것일까?\n\t\t44, 68, 80, 96, 101, 131\n\t\t(숫자만 입력하시오)";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
  printf("\n\n\t\t▣ANSWER_07 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n\n");
	if(a==44) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                  구구단 19단까지 외우세요?              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 54) 
{
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   7 FLOOR     \n");                   
   printf(" ▣HINT_KEY_07 : 트럼프 카드는 총 몇장으로 구성되어있나?                         \n");
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_07\n\n\t\t서로 다른 1자릿수의 숫자가 쓰인\n\t\t2장의 카드가 있다. 이 카드를 나열해서\n\t\t2자리의 숫자를 만들었다. 다음으로,\n\t\t이 카드 2장을 반대로 나열해서\n\t\t다른 2자리의 숫자를 만들었다.\n\t\t이렇게 만들어진 2자리의 숫자 2개를\n\t\t더한 값은 다음 중 어느 것일까?\n\t\t44, 68, 80, 96, 101, 131\n\t\t(숫자만 입력하시오)\n");
   char *script = "\n\t\t▣HINT_07\n\n\t\t15+51, 34+43\n\t\t좌우의 자릿수가 서로 바뀐 수를 더하면\n\t\t어떤 수의 배수가 된다.\n\t\t";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_07 : ");
   scanf("%d", &a);
   printf("\n\n");

   if(a==44) 
{
	
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                  구구단 19단까지 외우세요?              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
} 
	else 
  	 {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                 구구단 19단까지 외우세요                ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
}
	else 
	{
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                    동작그만 밑장빼기냐                  ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
}
void GameSceneQ7_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   7 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
   printf("\t\t▣EXPLAIN_07\n\n\t\t좌우의 자릿수가 서로 바뀐 2자리의 숫자를 더하면,\n\t\t12+212=33, 35+53=88과 같이 언제나 11의 배수가 된다.\n\t\t제시된 보기 중 11의 배수는 44뿐이다.\n\t\t더해서 44가 되려면 31+13, 22+22를 가정할 수 있는데,\n\t\t두 숫자가 서로 달라야 하므로\n\t\t1과 3이 들어간다는 사실을 알 수 있다.\n\t\t");
    printf("\n\n\n\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃                       전 못 외우는데                    ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneQ8(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   8 FLOOR     \n");                 
   printf(" ▣HINT_KEY_08 : 10리는 몇 키로미터인가?(소수점 반올림)                          \n");
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_08\n\n\t\t긴 종이를 절반으로 접으려 했는데,\n\t\t접고 보니 한 쪽이 다른 쪽보다\n\t\t1센티미터 길어지고 말았다.\n\t\t그래서 폈다가 다시 접었더니, 이번에는\n\t\t반대쪽이 1센티미터 길어졌다.\n\t\t종이를 펴 보니 가운데에 종이를 접은\n\t\t자국이 2군데 생겨 있었다.\n\t\t이 자국들 사이의 간격은 몇 밀리미터가 될까?\n\t\t(숫자만 입력하시오)";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
  printf("\n\n\t\t▣ANSWER_08 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n\n");
	if(a==10) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃            혹시 종이로 직접 접어보신건 아니죠?          ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 4) 
{
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   8 FLOOR     \n");                   
   printf(" ▣HINT_KEY_08 : 10리는 몇 키로미터인가?(소수점 반올림)                          \n");
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_08\n\n\t\t긴 종이를 절반으로 접으려 했는데,\n\t\t접고 보니 한 쪽이 다른 쪽보다\n\t\t1센티미터 길어지고 말았다.\n\t\t그래서 폈다가 다시 접었더니, 이번에는\n\t\t반대쪽이 1센티미터 길어졌다.\n\t\t종이를 펴 보니 가운데에 종이를 접은\n\t\t자국이 2군데 생겨 있었다.\n\t\t이 자국들 사이의 간격은 몇 밀리미터가 될까?\n\t\t(숫자만 입력하시오)\n");
   char *script = "\n\t\t▣HINT_08\n\n\t\t처음 접은 곳에서 몇 센티미터 길어졌는가\n\t\t그리고 몇 밀리미터인가를 묻고있다.\n\t\t";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_08 : ");
   scanf("%d", &a);
   printf("\n\n\n");

   if(a==10) 
{
	
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃            혹시 종이로 직접 접어보신건 아니죠?          ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
} 
	else 
  	 {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                   진짜 종이로 접어보는게..              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
}
	else 
	{
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                   문제를 잘 읽어보세요!                 ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
}
void GameSceneQ8_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   8 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
   printf("\t\t▣EXPLAIN_08\n\n\t\t간격은 1센티미터\n\t\t즉 10밀리미터가 된다.\n\t\t두께가 1센티미터인\n\t\t성냥갑을 상상하면 이해가 빠르다.\n\t\t성냥갑 한쪽의 높이가 종이에서\n\t\t두 번 접힌 부분, 반대쪽이 종이 끝이라고 생각하면 된다.\n\t\t");
    printf("\n\n\n\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃               직접 종이 접어서 푸셨다면 인정            ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneQ9(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   9 FLOOR     \n");                 
   printf(" ▣HINT_KEY_09 : 10파운드(lb)는 몇 키로그램인가?(소수점 반올림)                  \n");
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_09\n\n\t\t신발 가게에 온 손님이 30파운드의 신발을 고르고\n\t\t50파운드 지폐를 냈다. 신발 가게 주인은 잔돈을 만들기 위해\n\t\t옆 가게에서 돈을 바꾼 후 손님에게 거스름돈을 주었다.\n\t\t잠시 후, 옆 가게의 주인이 찾아와\n\t\t아까 받은 지폐가 위조지폐였다고 따졌고,\n\t\t신발 가게 주인은 사죄 후 현금을 털어\n\t\t50파운드를 돌려주었다. 손님은 이미 신발을 가지고 떠난 상태.\n\t\t결국 신발 가게 주인은 몇 파운드의 손해를 입은 것일까?\n\t\t(숫자만 입력하시오)";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
  printf("\n\n\t\t▣ANSWER_09 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n\n");
	if(a==50) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                 위조지폐사용은 범죄입니다.              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 5) 
{
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   9 FLOOR     \n");                   
   printf(" ▣HINT_KEY_09 : 10파운드(lb)는 몇 키로그램인가?(소수점 반올림)                  \n");
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_09\n\n\t\t신발 가게에 온 손님이 30파운드의 신발을 고르고\n\t\t50파운드 지폐를 냈다. 신발 가게 주인은 잔돈을 만들기 위해\n\t\t옆 가게에서 돈을 바꾼 후 손님에게 거스름돈을 주었다.\n\t\t잠시 후, 옆 가게의 주인이 찾아와\n\t\t아까 받은 지폐가 위조지폐였다고 따졌고,\n\t\t신발 가게 주인은 사죄 후 현금을 털어\n\t\t50파운드를 돌려주었다. 손님은 이미 신발을 가지고 떠난 상태.\n\t\t결국 신발 가게 주인은 몇 파운드의 손해를 입은 것일까?\n\t\t(숫자만 입력하시오)\n");
   char *script = "\n\t\t▣HINT_09\n\n\t\t신발 가게 주인과 옆 가게 주인\n\t\t신발 가게 주인과 손님으로 나눠 손익을 따져보자\n\t\t";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_09 : ");
   scanf("%d", &a);
   printf("\n\n\n");

   if(a==50) 
{
	
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                 위조지폐사용은 범죄입니다.              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
} 
	else 
  	 {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                  이것도 뭐 직접 해보는게..              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
}
	else 
	{
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                    괜히 손해만 봤네..                   ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
}
void GameSceneQ9_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   9 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
   printf("\t\t▣EXPLAIN_09\n\n\t\t손님이 가지고 간 신발이 30파운드,\n\t\t지불한 거스름돈이 20파운드이므로\n\t\t총 50파운드의 손해를 입었다.\n\t\t옆 가게 주인에게 위조 지폐를 주고\n\t\t50파운드를 받았지만, 나중에 같은\n\t\t금액을 돌려줬으므로 여기에서는\n\t\t손익이 발생하지 않는다.");
    printf("\n\n\n\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃                   자영업자분들 파이팅!                  ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneQ10(void)
{
	Beep(290, 150); //레
   system("cls");
   system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   10 FLOOR     \n");                 
   printf(" ▣HINT_KEY_10 : 화면에 있는 모든 수의 합은 몇인가?                              \n");
   printf("                                                                                 \n");
    char *script = "\t\t▣QUESTION_10\n\n\t\t돌고 도는 숫자에 규칙이 있다.\n\t\t[?]에 들어가는 숫자는 무엇일까\n\n\t\t16 → 37 → 58 → [?]\n\t\t↑                ↓\n\t\t 4 ← 20 ← 42 ← 145\n\t\t(숫자만 입력하시오)";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
  printf("\n\n\t\t▣ANSWER_10 : ");
   scanf("%d", &a);
   printf("                                                                                  \n");
   printf("                                                                                  \n");
   printf("                                                                                  \n\n\n\n\n");
	if(a==89) 
   {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                      수학 좀 하시네요!                  ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
	else if (a == 362) 
{
   	system("mode con cols=81 lines=40");
   
   printf("                                                                                 \n");
   printf("                                   10 FLOOR     \n");                   
   printf(" ▣HINT_KEY_10 : 화면에 있는 모든 수의 합은 몇인가?                              \n");
   printf("                                                                                 \n");
   printf("\t\t▣QUESTION_10\n\n\t\t돌고 도는 숫자에 규칙이 있다.\n\t\t[?]에 들어가는 숫자는 무엇일까\n\n\t\t16 → 37 → 58 → [?]\n\t\t↑                ↓\n\t\t 4 ← 20 ← 42 ← 145\n\t\t(숫자만 입력하시오)");
   char *script = "\n\n\t\t▣HINT_10\n\n\t\t십의 자리와 일의 자리에 뭔가 있을 듯 하다.\n\t\t루트나 제곱을 해볼까?\n\t\t";
    int length = strlen(script);
    int i; 
    int a;
   

    for (i = 0; i < length; i++)
    {
        printf("%c", script[i]);
        _sleep(10);         
    }   
    
   printf("\n\t\t▣ANSWER_10 : ");
   scanf("%d", &a);
   printf("\n\n\n\n\n");

   if(a==89) 
{
	
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                      수학 좀 하시네요!                  ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'O' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
} 
	else 
  	 {
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                      거의 다 왔는데..                   ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}            
}
	else 
	{
   	printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
   printf("  ■■■■■■■■■ ┃                  힌트가 필요하실 수도..?                ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'X' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	}
}
void GameSceneQ10_O(void)
{
	Beep(290, 150); //레
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("                                   10 FLOOR     \n");                  
    printf("                                                                                 \n");
    printf("                                                                                 \n");
   printf("\t\t▣EXPLAIN_10\n\n\t\t89가 들어간다.\n\t\t각 숫자를 1자리씩 분해해서\n\t\t제곱한 후 더하면 된다.\n\t\t\n\t\t\n\t\t\n\t\t");
    printf("\n\n\n\n\n\n\n\t\t");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                                                                                  \n");
    printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("                     ┏━┛                                                     ┗━┓\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("    ■■■■■■■   ┃                                                         ┃\n");
    printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
    printf("  ■■    ■    ■■ ┃                                                         ┃\n");  
    printf("  ■■■■■■■■■ ┃                            흠...                        ┃\n");   
    printf("    ■■■  ■■■   ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■■■■■     ┃                                                         ┃\n");
    printf("      ■  ■  ■     ┃                                                         ┃\n");
    printf("                     ┃                                                         ┃\n");
    printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
    printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneEnding_1(void)
{

   Beep(260, 150); //도
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃             이렇게 모든 문제가 끝이 났습니다.           ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneEnding_2(void)
{

   Beep(290, 150); //레
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■                                                                   \n");
   printf("  ■■■■■■                                                                   \n");
   printf("      ■■                                                                       \n");
   printf("      ■■                                                                       \n");
   printf("      ■■                                                                       \n");
   printf("      ■■                                                                       \n");
   printf("      ■■                                                                       \n");
   printf("      ■■                                                                       \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                     재미는 있으셨나요?                  ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_3(void)
{


   Beep(330, 150); //미
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■                                                      \n");
   printf("  ■■■■■■ ■■    ■■                                                      \n");
   printf("      ■■     ■■    ■■                                                      \n");
   printf("      ■■     ■■■■■■                                                      \n");
   printf("      ■■     ■■■■■■                                                      \n");
   printf("      ■■     ■■    ■■                                                      \n");
   printf("      ■■     ■■    ■■                                                      \n");
   printf("      ■■     ■■    ■■                                                      \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                문제가 어렵진 않으셨나요?                ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_4(void)
{


   
   Beep(340, 150); //파
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■                                             \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■                                             \n");
   printf("      ■■     ■■    ■■   ■■                                               \n");
   printf("      ■■     ■■■■■■   ■■                                               \n");
   printf("      ■■     ■■■■■■   ■■                                               \n");
   printf("      ■■     ■■    ■■   ■■                                               \n");
   printf("      ■■     ■■    ■■ ■■■■                                             \n");
   printf("      ■■     ■■    ■■ ■■■■                                             \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                    생애 첫 프로젝트인데                 ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_5(void)
{


   
   Beep(380, 150); //솔                 
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■   ■■   ■■      ■                                \n");
   printf("      ■■     ■■■■■■   ■■   ■■■■                                    \n");
   printf("      ■■     ■■■■■■   ■■       ■■■                                  \n");
   printf("      ■■     ■■    ■■   ■■   ■      ■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                퀄리티가 많이 떨어집니다.                ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_6(void)
{


                   
   Beep(430, 150); //라
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■   ■■   ■■      ■                                \n");
   printf("      ■■     ■■■■■■   ■■   ■■■■                                    \n");
   printf("      ■■     ■■■■■■   ■■       ■■■                                  \n");
   printf("      ■■     ■■    ■■   ■■   ■      ■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■   ■■■■       ■■■■                   \n");
   printf("                                                      ■■■■                   \n");
   printf("                                                        ■■                     \n");
   printf("                                                        ■■                     \n");
   printf("                                                        ■■                     \n");
   printf("                                                        ■■                     \n");
   printf("                                                      ■■■■                   \n");
   printf("                                                      ■■■■                   \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                    다음엔 유니티로 더욱                 ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_7(void)
{


   
   Beep(490, 150); //시
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■   ■■   ■■      ■                                \n");
   printf("      ■■     ■■■■■■   ■■   ■■■■                                    \n");
   printf("      ■■     ■■■■■■   ■■       ■■■                                  \n");
   printf("      ■■     ■■    ■■   ■■   ■      ■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■   ■■■■       ■■■■   ■■■■        \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                        ■■   ■■      ■      \n");
   printf("                                                        ■■   ■■■■          \n");
   printf("                                                        ■■       ■■■        \n");
   printf("                                                        ■■   ■      ■■      \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                      ■■■■   ■■■■        \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                 퀄리티 있는 게임을 만들거나             ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_8(void)
{

   Beep(260, 150); //도
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■   ■■   ■■      ■                                \n");
   printf("      ■■     ■■■■■■   ■■   ■■■■                                    \n");
   printf("      ■■     ■■■■■■   ■■       ■■■                                  \n");
   printf("      ■■     ■■    ■■   ■■   ■      ■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■   ■■■■       ■■■■   ■■■■        \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                        ■■   ■■      ■      \n");
   printf("                                                        ■■   ■■■■          \n");
   printf("                                                        ■■       ■■■        \n");
   printf("                                                        ■■   ■      ■■      \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                      ■■■■   ■■■■        \n");
   printf("                                                                                 \n");
   printf("    ■■■■■                                                                   \n");
   printf("    ■■■■■                                                                   \n");
   printf("    ■■                                                                         \n");
   printf("    ■■■■■                                                                   \n");
   printf("    ■■■■■                                                                   \n");
   printf("    ■■                                                                         \n");
   printf("    ■■■■■                                                                   \n");
   printf("    ■■■■■                                                                   \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                자바나 다른 언어로 무언가를              ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_9(void)
{

   Beep(290, 150); //레
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■   ■■   ■■      ■                                \n");
   printf("      ■■     ■■■■■■   ■■   ■■■■                                    \n");
   printf("      ■■     ■■■■■■   ■■       ■■■                                  \n");
   printf("      ■■     ■■    ■■   ■■   ■      ■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■   ■■■■       ■■■■   ■■■■        \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                        ■■   ■■      ■      \n");
   printf("                                                        ■■   ■■■■          \n");
   printf("                                                        ■■       ■■■        \n");
   printf("                                                        ■■   ■      ■■      \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                      ■■■■   ■■■■        \n");
   printf("                                                                                 \n");
   printf("    ■■■■■ ■■    ■■                                                      \n");
   printf("    ■■■■■ ■■    ■■                                                      \n");
   printf("    ■■       ■■■  ■■                                                      \n");
   printf("    ■■■■■ ■■■■■■                                                      \n");
   printf("    ■■■■■ ■■■■■■                                                      \n");
   printf("    ■■       ■■  ■■■                                                      \n");
   printf("    ■■■■■ ■■    ■■                                                      \n");
   printf("    ■■■■■ ■■    ■■                                                      \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                      만들어 보고 싶네요                 ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_10(void)
{

   
   Beep(330, 150); //미
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■   ■■   ■■      ■                                \n");
   printf("      ■■     ■■■■■■   ■■   ■■■■                                    \n");
   printf("      ■■     ■■■■■■   ■■       ■■■                                  \n");
   printf("      ■■     ■■    ■■   ■■   ■      ■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■   ■■■■       ■■■■   ■■■■        \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                        ■■   ■■      ■      \n");
   printf("                                                        ■■   ■■■■          \n");
   printf("                                                        ■■       ■■■        \n");
   printf("                                                        ■■   ■      ■■      \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                      ■■■■   ■■■■        \n");
   printf("                                                                                 \n");
   printf("    ■■■■■ ■■    ■■ ■■■                                               \n");
   printf("    ■■■■■ ■■    ■■ ■■■■                                             \n");
   printf("    ■■       ■■■  ■■ ■■  ■■                                           \n");
   printf("    ■■■■■ ■■■■■■ ■■  ■■                                           \n");
   printf("    ■■■■■ ■■■■■■ ■■  ■■                                           \n");
   printf("    ■■       ■■  ■■■ ■■  ■■                                           \n");
   printf("    ■■■■■ ■■    ■■ ■■■■                                             \n");
   printf("    ■■■■■ ■■    ■■ ■■■                                               \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                 심심해서 만들게된 이 게임을             ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_11(void)
{

   
   Beep(340, 150); //파
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■   ■■   ■■      ■                                \n");
   printf("      ■■     ■■■■■■   ■■   ■■■■                                    \n");
   printf("      ■■     ■■■■■■   ■■       ■■■                                  \n");
   printf("      ■■     ■■    ■■   ■■   ■      ■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■   ■■■■       ■■■■   ■■■■        \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                        ■■   ■■      ■      \n");
   printf("                                                        ■■   ■■■■          \n");
   printf("                                                        ■■       ■■■        \n");
   printf("                                                        ■■   ■      ■■      \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                      ■■■■   ■■■■        \n");
   printf("                                                                                 \n");
   printf("    ■■■■■ ■■    ■■ ■■■     ■■■■                                  \n");
   printf("    ■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("    ■■       ■■■  ■■ ■■  ■■   ■■                                    \n");
   printf("    ■■■■■ ■■■■■■ ■■  ■■   ■■                                    \n");
   printf("    ■■■■■ ■■■■■■ ■■  ■■   ■■                                    \n");
   printf("    ■■       ■■  ■■■ ■■  ■■   ■■                                    \n");
   printf("    ■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("    ■■■■■ ■■    ■■ ■■■     ■■■■                                  \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃      만족하진 않지만 어쨌든 마무리를 지을 수 있어서     ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_12(void)
{

   
   Beep(380, 150); //솔                 
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■   ■■   ■■      ■                                \n");
   printf("      ■■     ■■■■■■   ■■   ■■■■                                    \n");
   printf("      ■■     ■■■■■■   ■■       ■■■                                  \n");
   printf("      ■■     ■■    ■■   ■■   ■      ■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■   ■■■■       ■■■■   ■■■■        \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                        ■■   ■■      ■      \n");
   printf("                                                        ■■   ■■■■          \n");
   printf("                                                        ■■       ■■■        \n");
   printf("                                                        ■■   ■      ■■      \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                      ■■■■   ■■■■        \n");
   printf("                                                                                 \n");
   printf("    ■■■■■ ■■    ■■ ■■■     ■■■■ ■■    ■■                     \n");
   printf("    ■■■■■ ■■    ■■ ■■■■   ■■■■ ■■    ■■                     \n");
   printf("    ■■       ■■■  ■■ ■■  ■■   ■■   ■■■  ■■                     \n");
   printf("    ■■■■■ ■■■■■■ ■■  ■■   ■■   ■■■■■■                     \n");
   printf("    ■■■■■ ■■■■■■ ■■  ■■   ■■   ■■■■■■                     \n");
   printf("    ■■       ■■  ■■■ ■■  ■■   ■■   ■■  ■■■                     \n");
   printf("    ■■■■■ ■■    ■■ ■■■■   ■■■■ ■■    ■■                     \n");
   printf("    ■■■■■ ■■    ■■ ■■■     ■■■■ ■■    ■■                     \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃                     뿌듯하고 다행이네요                 ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}
void GameSceneEnding_13(void)
{

                   
   Beep(430, 150); //라
   
   system("cls"); //화면을 지워준다
   system("mode con cols=81 lines=40"); //mode con:콘솔모드 colds:가로, lines:세로 
   
   printf("  ■■■■■■ ■■    ■■ ■■■■   ■■■■                                  \n");
   printf("  ■■■■■■ ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■   ■■   ■■      ■                                \n");
   printf("      ■■     ■■■■■■   ■■   ■■■■                                    \n");
   printf("      ■■     ■■■■■■   ■■       ■■■                                  \n");
   printf("      ■■     ■■    ■■   ■■   ■      ■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■ ■■■■■■                                \n");
   printf("      ■■     ■■    ■■ ■■■■   ■■■■       ■■■■   ■■■■        \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                        ■■   ■■      ■      \n");
   printf("                                                        ■■   ■■■■          \n");
   printf("                                                        ■■       ■■■        \n");
   printf("                                                        ■■   ■      ■■      \n");
   printf("                                                      ■■■■ ■■■■■■      \n");
   printf("                                                      ■■■■   ■■■■        \n");
   printf("                                                                                 \n");
   printf("    ■■■■■ ■■    ■■ ■■■     ■■■■ ■■    ■■     ■■■■        \n");
   printf("    ■■■■■ ■■    ■■ ■■■■   ■■■■ ■■    ■■   ■■■■■■      \n");
   printf("    ■■       ■■■  ■■ ■■  ■■   ■■   ■■■  ■■ ■■■      ■      \n");
   printf("    ■■■■■ ■■■■■■ ■■  ■■   ■■   ■■■■■■ ■■                \n");
   printf("    ■■■■■ ■■■■■■ ■■  ■■   ■■   ■■■■■■ ■■    ■■■      \n");
   printf("    ■■       ■■  ■■■ ■■  ■■   ■■   ■■  ■■■ ■■■    ■■      \n");
   printf("    ■■■■■ ■■    ■■ ■■■■   ■■■■ ■■    ■■   ■■■■■■      \n");
   printf("    ■■■■■ ■■    ■■ ■■■     ■■■■ ■■    ■■     ■■■■■      \n");
   printf("                                                                                 \n");
   printf("                       ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
   printf("                     ┏━┛                                                     ┗━┓\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("    ■■■■■■■   ┃                                                         ┃\n");
   printf("  ■■  ■■■  ■■ ┃                                                         ┃\n");
   printf("  ■■    ■    ■■ ┃                                                         ┃\n");
   printf("  ■■■■■■■■■ ┃               이상 윤재이였습니다 감사합니다.           ┃\n"); 
   printf("    ■■■  ■■■   ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■■■■■     ┃                                                         ┃\n");
   printf("      ■  ■  ■     ┃                                                         ┃\n");
   printf("                     ┃                                                         ┃\n");
   printf("                     ┗━┓                                  PRESS 'N' BUTTON   ┏━┛\n");
   printf("                       ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void GameSceneX(void)
{
	Beep(490, 300); //시
	Beep(340, 200); //파
	Beep(330, 200); //미
	Beep(290, 200); //레
	Beep(260, 200); //도
  
	system("cls");
	system("mode con cols=81 lines=40");
	
	printf("                                                                                 \n");
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("┃                                                                             ┃\n");
    printf("┃      ■■■■            ■■■         ■■      ■■      ■■■■■■■  ┃\n");
    printf("┃    ■■■■■■          ■■■         ■■■  ■■■      ■■■■■■■  ┃\n");
    printf("┃  ■■      ■■        ■■  ■■       ■■■■■■■      ■■            ┃\n");
    printf("┃  ■■                  ■■  ■■       ■■■■■■■      ■■■■■■■  ┃\n");
    printf("┃  ■■  ■■■■      ■■■■■■■     ■  ■■■  ■      ■■■■■■■  ┃\n");
    printf("┃  ■■  ■■■■      ■■■■■■■     ■  ■■■  ■      ■■■■■■■  ┃\n");
    printf("┃  ■■      ■■      ■■      ■■     ■    ■    ■      ■■            ┃\n");
    printf("┃    ■■■■■■      ■■      ■■     ■    ■    ■      ■■■■■■■  ┃\n");
    printf("┃      ■■■■■      ■■      ■■     ■    ■    ■      ■■■■■■■  ┃\n");
    printf("┃                                                                             ┃\n");
    printf("┃                                                                             ┃\n");
    printf("┃      ■■■          ■■      ■■     ■■■■■■■      ■■■■■■    ┃\n");
    printf("┃    ■■■■■        ■■      ■■     ■■■■■■■      ■■■■■■■  ┃\n");
    printf("┃  ■■      ■■      ■■      ■■     ■■                ■■      ■■  ┃\n");
    printf("┃  ■■      ■■      ■■■  ■■■     ■■■■■■■      ■■■■■■■  ┃\n");
    printf("┃  ■■      ■■      ■■■  ■■■     ■■■■■■■      ■■■■■■    ┃\n");
    printf("┃  ■■      ■■        ■■  ■■       ■■■■■■■      ■■■■■      ┃\n");
    printf("┃  ■■      ■■        ■■■■■       ■■                ■■  ■■■    ┃\n");
    printf("┃    ■■■■■            ■■■         ■■■■■■■      ■■    ■■■  ┃\n");
    printf("┃      ■■■                ■           ■■■■■■■      ■■      ■■  ┃\n");
    printf("┃                                                                             ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    printf("                                                                                 \n");
    printf("                                                                                 \n");
    printf("          ■■■■■                                         ■■■■■          \n");
    printf("        ■■■■■■■                                     ■■■■■■■        \n");
    printf("      ■■  ■■■  ■■                                 ■■  ■■■  ■■      \n");
    printf("      ■■    ■    ■■                                 ■■    ■    ■■      \n");
    printf("      ■■■■■■■■■                                 ■■■■■■■■■      \n");
    printf("        ■■■  ■■■                                     ■■■  ■■■        \n");
    printf("          ■■■■■                                         ■■■■■          \n");
    printf("          ■■■■■                                         ■■■■■          \n");
    printf("          ■  ■  ■            PRESS ANY BUTTON             ■  ■  ■          \n");
    printf("                                                                                 \n");
    printf("                                                                                 \n");
    printf("                                                                                 \n");
    
  
}
