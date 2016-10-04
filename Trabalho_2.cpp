#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
	pid_t pid,pid2,pid3,pid4,pid5;
int pai=0,filho1=0,filho2=0,filho3=0,neto1=0, neto2=0,i=18;
printf("INICIO DO PROGRAMA\n");
printf("-----------------------\n");
pid=fork();
		switch(pid){
		case -1:
			printf("Erro!");
		break;

		case 0: /*processo filho1*/
			while(1){
				if(filho1 ==0){
					sleep(18);
					printf("FILHO1 nasceu!\n");
				}
				sleep(1);
				filho1++;
				printf("FILHO1 %d, meu pai é %d, tenho %i anos\n", getpid(),getppid(),filho1);
					if(filho1==5){
						printf("FILHO1 morreu com %i anos\n",filho1);
						exit(0);
					}					
			}
		break;

		default: /*processo Pai*/
		while(1){
			pai++;
			printf("PAI(%d), tenho %i ano(s) | Meu pai %d \n", getpid(),pai, getppid());
			
			sleep(1);
			switch(pai){
				case 33:
					printf("PAI morreu com %i anos\n",pai);
					exit(0);
				break;

				case 20:
					pid2=fork();
					switch(pid2){
						case -1:
							printf("Erro!");
						break;
						case 0: /*processo filho2*/
							while(1){
								if(filho2 ==0){
									printf("FILHO2 nasceu!\n");
								}
								sleep(1);
								filho2++;
								printf("FILHO2 (%d), tenho %i ano(s) | Meu pai %d\n", getpid(),filho2,getppid());
									if(filho2==20){
										printf("FILHO2 morreu com %i anos\n",filho2);
										exit(0);
									}	
								if(filho2==15){
									pid3=fork();
									switch(pid3){
										case -1:
											printf("Erro!");
										break;
										case 0: /*processo neto1*/
											while(1){
												if(neto1 ==0){
													printf("NETO1 nasceu!\n");
												}
												sleep(1);
												neto1++;
												printf("NETO1(%d), tenho %i ano(s) | Meu pai %d\n", getpid(),neto1, getppid());
													if(neto1==5){
														printf("NETO1 morreu com %i anos\n",neto1);
														exit(0);
													}					
											}
										break;
									}
								}
							}
						break;
						default:
							sleep(1);
							pid4=fork();
							switch(pid4){
								case -1:
									printf("Erro!");
								break;
								case 0:/*processo filho3*/
									while(1){
										if(filho3 ==0){
											printf("FILHO3 nasceu!\n");
										}
										sleep(1);
										filho3++;
										printf("FILHO3(%d), tenho %i ano(s) | Meu pai %d\n", getpid(),filho3,getppid());
											if(filho3==5){
												printf("FILHO3 morreu com %i anos\n",filho3);
												exit(0);
											}
										if(filho3==3){
											pid5=fork();
											switch(pid5){
												case -1:
													printf("Erro!");
												break;
												case 0: /*processo neto1*/
													while(1){
														if(neto2 ==0){
															printf("NETO2 nasceu!\n");
														}
														sleep(1);
														neto2++;
														printf("NETO2(%d), tenho %i ano(s) | Meu pai %d\n", getpid(),neto2,getppid());
															if(neto2==10){
																printf("NETO2 morreu com %i anos\n",neto2);
																exit(0);
															}					
													}
												break;
											}
										}					
									}
								break;
							}
						break;
					}
				break;
			}
		}	
		break;
	}	
	return 0;
}
