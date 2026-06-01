#include <stdio.h>
 #include <stdbool.h>
 int main() {
     bool start=false;
     char aux;
     bool finalizar = false;
 
    //PERSONAGEM
     char nomePlayer[20];
     int vida=100,ouro=200;
     int opcao, acao, exploracao, local, vidaTotal = 100, armadura=0;
     int tocha = 6;
     bool espada=false;
     bool escudo=false;
     /* -itens-
     1 - Armadura
     2 - espada
     3 - bracelete de ferro 
     4 - machado
     */
 
    //START
     do{
         printf("== PRESS S TO START ==\n");
         scanf(" %c",&aux);
          if(aux == 's' || aux == 'S'){
              start=true;
          }
     }while(start==false);
     //COLETAR DADOS & LOADING
     printf("== ESCOLHA O NOME DO SEU PERSONAGEM:  ");
     scanf("%s",&nomePlayer);
     printf ("<< %s >>  BEM VINDO A SWITHLAND \n",nomePlayer);
     printf ("loading...\n");
     for(int i=0; i<=100; i=i+10){
         printf("%d % \n",i);
     }
     //INICIO
     printf("\n<< %s >> == Você está no Monte Everest == \n",nomePlayer);
     printf("SUA VIDA: %i \nSEU OURO: %i\n\n",vida,ouro);
     //MENU DE EVENTOS
     do{
         printf("== MENU ==\n");
         printf("O que deseja fazer? \n1 - Explorar \n2 - Descansar \n3 - Ver Status \n4 - Sair do jogo\n");
         scanf("%d", &acao);
         switch(acao) {
                                    //PARTE DE EXPLORAÇÃO
            case 1:
                 printf("== EXPLORAR ==\n");
                 printf("Qual local deseja explorar? \n1 - Masmorra \n2 - templo \n3- caverna \n4 - Sair\n");
                 scanf("%d", &local);
                 switch(local){
                     case 1:
                     printf(" Você entrou na masmorra\n");
                          do {

                                 printf("1 - você viu um baú, deseja ir até ele?\n");
                                 printf("2 - você visualizou uma luminosidade, deseja ir até ela?\n");
                                 printf("3 - talvez aquela seja saída, deseja ir de encontro?\n");
                                 printf("4 - talvez você encontre novas oportunidades\n");
                                 scanf("%d", &opcao);
                              switch(opcao){
                                     case 1:
                                     printf("%s Você encontrou 100 de ouro!\n\n", nomePlayer);
                                       ouro = ouro + 100;
                                     break;
                                     case 2:
                                       printf(" %s Você encontrou uma armadura!\n\n", nomePlayer);
                                      armadura = armadura + 100;
                                      break;
                                     case 3: 
                                          printf("%s Você foi atacado por um esqueleto :P, perdeu 50 de vida!\n\n",nomePlayer);
                                      if(armadura > 0) {
                                         armadura = armadura - 50;
                                      }else{ 
                                       vida = vida - 50;
                                       if (vida <= 0) {
                                            printf("\n Você morreu na masmorra! GAME OVER \n");
                                            acao = 4; // Força a saída do menu principal
                                            opcao = 4; // Força a saída do loop da masmorra
                                            break;
                                            }
                                          }
                                        break;
                                     case 4: 
                                        printf("%s Você saiu da masmorra!:)\n\n", nomePlayer);
                                        break;
                                      default:
                                       printf(" opção inválida\n");
                                                               }
                            }while(opcao != 4);
            break;
            case 2:
                     printf("Você atravessa um corredor de pedra coberto por musgo...\n");
                     printf("O silêncio é profundo, apenas o som de água pingando ecoa no templo.\n");
                     printf("Uma luz dourada vem do centro da sala...\n\n");

                         do {

                             printf("== TEMPLO SAGRADO ==\n");
                             printf("1 - Um monge parece estar meditando em silêncio\n");
                             printf("2 - Um altar antigo com inscrições em ouro chama sua atenção\n");
                             printf("3 - Uma saída escura leva para outro caminho\n");
                             printf("4 - Sair do templo\n");

                             scanf("%d", &opcao);

                             switch(opcao) {

                                     case 1: {
                                         printf("\nVocê se aproxima do monge...\n");
                                         printf("Ele abre os olhos lentamente e observa você em silêncio.\n");
                                         printf("Sem dizer uma palavra, ele toca sua testa...\n");
                                         int cura = 40;

                                         if(vida + cura > vidaTotal) {
                                             cura = vidaTotal - vida;
                                         }

                                         vida += cura;

                                         printf("Uma energia quente percorre seu corpo...\n");
                                        printf("Você sente suas forças retornando.\n");
                                         printf("Vida atual: %d\n\n", vida);
                                        break;
                                  }

                                          case 2: {
                                            printf("\nVocê se aproxima do altar dourado...\n");
                                             printf("As inscrições brilham suavemente quando você toca nelas.\n");
                                             printf("Um pequeno compartimento secreto se abre...\n");

                                          int ganhoOuro = 80;
                                          ouro += ganhoOuro;
                                           printf("Você encontrou moedas antigas!\n");
                                           printf("Ouro atual: %d\n\n", ouro);
                                           break;
                                     }

                                          case 3:
                                              printf("\nVocê decide não arriscar o templo inteiro...\n");
                                              printf("E retorna ao caminho anterior e encontra uma espada.\n\n");
                                                if(espada==false){
                                                    espada=true;
                                                }
                                               break;

                                          case 4:
                                              printf("\nVocê se afasta do templo sagrado...\n");
                                              printf("A sensação de paz desaparece aos poucos.\n\n");
                                              break;

                                          default:
                                              printf("\nO templo parece reagir ao seu erro...\n");
                                              printf("Nada acontece, mas você sente um calafrio.\n\n");
                                              break;
                                         }

                             }while(opcao != 4);
            break;
            case 3:
                        
                             printf("\nVocê entrou na caverna\n");
                             printf("A caverna é escura e cheia de perigos! \nVocê improvisa uma tocha! \nDurabilidade da tocha: 6 \n\n");
                             do{
                                 printf("O que você deseja explorar na caverna?\n");
                                 printf("1 - Explorar recursos e pedras preciosas (gasta 2 de tocha)\n");
                                 printf("2 - Explorar fendas estreitas e compartimentos de difícil acesso (gasta 3 de tocha)\n");
                                 printf("3 - Explorar sons esquisitos (gasta 3 de tocha)\n");
                                 printf("4 - Sair da caverna\n");
                                 scanf("%d", &exploracao);
                                 switch(exploracao){
                                     case 1:
                                         if (tocha >= 2){
                                             printf("\nVocê avança lentamente pela caverna iluminada apenas pela luz da tocha.\n");
                                             printf("O som de gotas ecoa pelas paredes úmidas enquanto pequenos brilhos chamam sua atenção.\n");
                                             printf("Ao observar melhor, você encontra veios de cristais incrustados nas rochas.\n");
                                             printf("Com cuidado, começa a extrair pedras preciosas escondidas entre as fendas.\n");
                                             printf("Depois de alguns minutos de exploração, sua mochila fica mais pesada com os minerais coletados.\n");
                                             printf("A tocha enfraquece, mas a expedição trouxe recursos valiosos.\n");
                                             printf("Você obteve mais 3000 de ouro\n\n");
                                             ouro += 1500;
                                             tocha -= 2;
                                         }else{
                                             printf("\nVocê tenta avançar pela caverna, mas a escuridão é absoluta.\n");
                                             printf("Sem uma tocha, cada passo parece mais perigoso do que o anterior.\n");
                                             printf("Enquanto tenta encontrar o caminho, você tropeça em pedras afiadas escondidas no chão.\n");
                                             printf("A queda provoca cortes e machucados pelo corpo.\n");
                                             printf("O som de ecos estranhos aumenta ainda mais o desespero dentro da caverna.\n");
                                             printf("Ferido e sem conseguir enxergar nada, você decide recuar antes que algo pior aconteça.\n");
                                             printf("Voce perdeu 20 pontos de vida.\n\n");
                                             vida -= 20;
                                                if (vida <= 0) {
                                                   printf("\n?? Você sucumbiu à escuridão da caverna! GAME OVER ??\n");
                                                   acao = 4;       // Força a saída do menu principal
                                                   exploracao = 4; // Força a saída do loop da caverna
                                                   break;
                                                }
                                         }
                                         break;
                                     case 2:
                                         if(tocha >= 3){
                                             printf("\nCom a tocha em mãos, você se aproxima das fendas estreitas da caverna.\n");
                                             printf("O caminho é apertado e exige muito cuidado para atravessar.\n");
                                             printf("Após rastejar por pequenos corredores de pedra, você encontra um compartimento escondido.\n");
                                             printf("Enquanto examina o local, pequenas criaturas agressivas surgem das sombras.\n");
                                             printf("Elas avançam rapidamente e conseguem arranhar seu braço durante o confronto.\n");
                                             printf("Depois de lutar por alguns minutos, você derrota as criaturas e encontra moedas e itens raros.\n");
                                             printf("Ferido, mas vitorioso, você retorna ao caminho principal da caverna.\n");
                                             printf("Você perdeu 20 pontos de vida.\n");
                                             printf("Você consegiu 1500 moedas de ouro.\n\n");
                                             vida -= 20;
                                             ouro += 1500;
                                             if (vida <= 0) {
                                                    printf("\n?? Você sucumbiu à escuridão da caverna! GAME OVER ??\n");
                                                    acao = 4;       // Força a saída do menu principal
                                                    exploracao = 4; // Força a saída do loop da caverna
                                                    break;
                                             }
                                         }else{
                                             printf("\nVocê tenta explorar as fendas estreitas sem nenhuma fonte de luz.\n");
                                             printf("A escuridão dificulta perceber o tamanho dos corredores apertados.\n");
                                             printf("Enquanto avança, seu corpo fica preso entre rochas afiadas.\n");
                                             printf("Na tentativa de escapar, você sofre cortes profundos nos braços e pernas.\n");
                                             printf("Desorientado e machucado, você consegue sair das fendas com dificuldade.\n");
                                             printf("Sem uma tocha, continuar explorando seria perigoso demais.\n");
                                             printf("Você perdeu 50 pontos de vida.\n");
                                             printf("Você perdeu 500 moedas de ouro.\n\n");
                                             vida -= 50;
                                             ouro -= 500;
                                             if (vida <= 0) {
                                                    printf("\n?? Você sucumbiu à escuridão da caverna! GAME OVER ??\n");
                                                    acao = 4;       // Força a saída do menu principal
                                                    exploracao = 4; // Força a saída do loop da caverna
                                                 break;
                                             }
                                         }
                                         break;
                                     case 3:
                                         if(tocha >= 3){
                                             printf("\nGuiado pelos sons estranhos que ecoam pela caverna, você segue por um corredor escuro.\n");
                                             printf("Os ruídos ficam cada vez mais altos, misturados com rosnados e pedras se arrastando.\n");
                                             printf("Ao chegar em uma grande abertura, criaturas escondidas avançam em sua direção.\n");
                                             printf("O combate é intenso e você quase deixa a tocha cair durante a luta.\n");
                                             printf("Depois de derrotar os monstros, o silêncio volta a dominar a caverna.\n");
                                             printf("Entre os restos das criaturas, você encontra alguns recursos valiosos esquecidos ali.\n");
                                             printf("Você perdeu 15 pontos de vida.\n");
                                             printf("Você conseguiu 1000 moedas de ouro\n\n");
                                             vida -= 15;
                                             ouro += 1000;
                                             if (vida <= 0) {
                                                 printf("\n?? Você sucumbiu à escuridão da caverna! GAME OVER ??\n");
                                                    acao = 4;       // Força a saída do menu principal
                                                    exploracao = 4; // Força a saída do loop da caverna
                                                 break;
                                              }                                               
                                             break;
                                         }else{
                                             printf("\nSem uma tocha, você segue os sons estranhos apenas pela direção dos ecos.\n");
                                             printf("A escuridão torna impossível saber o que está se movendo ao seu redor.\n");
                                             printf("De repente, criaturas ocultas atacam sem aviso.\n");
                                             printf("Sem conseguir enxergar, você sofre vários golpes antes de escapar desesperadamente.\n");
                                             printf("Ferido e assustado, você consegue encontrar a saída do corredor.\n");
                                             printf("Talvez investigar sons misteriosos no escuro não tenha sido uma boa ideia.\n");
                                             printf("Você perdeu 75 pontos de vida.\n");
                                             printf("Você perdeu 750 moedas de ouro\n\n");
                                             vida -= 75;
                                             ouro -= 750;
                                             if (vida <= 0) {
                                                  printf("\n?? Você sucumbiu à escuridão da caverna! GAME OVER ??\n");
                                                  acao = 4;       // Força a saída do menu principal
                                                  exploracao = 4; // Força a saída do loop da caverna
                                                  break;
                                              }                                               
                                         }
                                         break;
                                     case 4:
                                         printf("Você sai da caverna!\n");
                                         break;
                                     default:
                                         printf("Opção inválida, tente novamente\n");
                                     break;
                             }
                         }while(exploracao != 4);
            break;
            case 4:
                         printf("Saiu da exploração\n");
            break;
            default:
                         printf("Opção inválida, tente novamente\n");
                         break;
                            }
              break;
                                      //PARTE DE DESCANSO
             case 2:
                     printf("== DESCANSO ==\n");
                     printf("Seu personagem tirou o dia de folga e foi descansar\n");

                     int cura = vidaTotal / 10;

                     if(vida + cura > vidaTotal) {
                      cura = vidaTotal - vida;
                     }

                     vida += cura;

                     printf("Ganhos:\n");
                     printf("+%d de vida\n", cura);
                     printf("Vida atual: %d\n\n", vida);

                     break;
                                        //PARTE DE STATUS
             case 3:
                 do {
                     printf("\n=== STATUS ===\n");
                     printf("1 - mostrar inventário\n");
                     printf("2 - mostrar ouro, vida e armadura\n");
                     printf("3 - sair\n");
                     scanf("%d", &opcao);
                     switch(opcao){
                         case 1:
                             if(espada == true && escudo == true){
                             printf("Espada - quantidade = 1\n");
                             printf("Escudo - quantidade = 1\n");
                             } else if (espada == true && escudo == false){
                                 printf("Espada - quantidade = 1\n");
                             } else if (espada == false && escudo == true){
                                 printf("Escudo - quantidade = 1\n");
                                } else if (espada == false && escudo == false){
                                 printf("Inventário vazio \n");
                                 }
                             break;
                         case 2:
                             printf(" Vida: %d\n", vida);
                             printf(" Ouro: %d\n", ouro);
                             printf(" Armadura: %d\n", armadura);
                             break;
                         case 3: 
                             printf(" saindo\n\n");
                             break;
                         default:
                             printf(" opção inválida\n");
                             break;
                     }
                  }while(opcao != 3);
                 break;
                                          //END GAME
             case 4:
                 printf("== End Game ==");
                 break;
         }
     }while(acao != 4);
 

    return 0;
 }

