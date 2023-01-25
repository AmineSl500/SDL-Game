#include <cstdlib>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <stdio.h>
#include <SDL/fmod.h>
#include <dos.h>
#include <dir.h>
void jeu();
int main ( int argc, char** argv )
{
    jeu();
    return 0;
}
void jeu()
{
    FMOD_CHANNELGROUP *channel;
    FMOD_SYSTEM *system;
    FMOD_System_Create(&system);
    FMOD_System_Init(system, 2, FMOD_INIT_NORMAL, NULL);
    FMOD_SOUND *scary = NULL;
    FMOD_SOUND *nyancat = NULL;
    FMOD_System_CreateSound(system, "scaryy.mp3", FMOD_CREATESAMPLE, 0, &scary);
    int lolmlol = 0;
    int donestage = 0;
    int donethank = 0;
    int donemario = 0;
    int donesunglasses = 0;
    int stopmario = 0;
    int debut = 0;
    int stopmariotime = 0;
    int waktdabberrassekscissor = 0;
    int Scissorstop = 0;
    int Scissordown = 0;
    int Nomouvement = 0;
    int dabberrasekhooh = 0;
    int tempsPrecedentFlow = 0, tempsActuelmente = 0;
    int tempsPrecedentFlowo = 0,tempsPrecedamente = 0,tempsPrecedenteScissor = 0,tempsPrecedenteParole = 0,tempsHoohpetit = 0;
    int done = 0;
    int hitbox;
    int select = 0;
    int finallydone = 0;
    int vie = 0;
    int vie1 = 0;
    int vie2 = 0;
    int vie3 = 0;
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    TTF_Font *police = NULL;
    SDL_Surface* ecran = SDL_SetVideoMode(620,480,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
    SDL_Event event;
    int continuer = 1;
    int essai = 0;
    SDL_Surface* sol = SDL_LoadBMP("Resources/fond.bmp");
    SDL_Rect Positionsol;
    Positionsol.x = 0;
    Positionsol.y = 445;
    SDL_Surface* plateforme = SDL_LoadBMP("Resources/Nuage.bmp");
    SDL_Rect Positionplateforme1;
    Positionplateforme1.x = 120;
    Positionplateforme1.y = 270;
    SDL_Rect Positionplateforme2;
    Positionplateforme2.x = 350;
    Positionplateforme2.y = 340;
    SDL_Rect Positionplateforme3;
    Positionplateforme3.x = 350;
    Positionplateforme3.y = 180;
    SDL_Rect Positionnuage;
    Positionnuage.x = 0;
    Positionnuage.y = 0;
    SDL_Surface* Superman = SDL_LoadBMP("Resources/Mario.bmp");
    SDL_Rect Positionsuperman;
    Positionsuperman.x = Positionnuage.x + 21;
    Positionsuperman.y = 500;
    SDL_Rect Positionnyancat1;
    Positionnyancat1.x = 130;
    Positionnyancat1.y = 400;
    SDL_Rect Positionnyancat2;
    Positionnyancat2.x = 220;
    Positionnyancat2.y = 400;
    SDL_Surface* Boul = SDL_LoadBMP("Resources/vaisseau1.bmp");
    SDL_Rect Positionarbre;
    Positionarbre.x = 230;
    Positionarbre.y = 410;
    SDL_Rect Positionarbre1;
    Positionarbre1.x = 415;
    Positionarbre1.y = 410;
    SDL_Rect Positionarbre2;
    Positionarbre2.x = 350;
    Positionarbre2.y = 410;
    SDL_Rect Positionarbre3;
    Positionarbre3.x = 40;
    Positionarbre3.y = 410;
    SDL_Rect Positionarbre4;
    Positionarbre4.x = 550;
    Positionarbre4.y = 410;
    SDL_Rect Positionarbre5;
    Positionarbre5.x = 165;
    Positionarbre5.y = 410;
    police = TTF_OpenFont("vgafix.fon", 20);
    SDL_Color couleurNoire = {0, 0, 0};
    SDL_Color couleurBleu = {0, 0, 255};
    SDL_Surface* Shot = NULL;
    unsigned int score = 0;
    score > 0;
    char scorenow[2000] = "";
    SDL_Surface* Paroleshit = SDL_LoadBMP("Resources/Paroleshit.bmp");
    SDL_Surface* Nyancatotherway = SDL_LoadBMP("Resources/Mario_gauche.bmp");
    SDL_Surface* Nyancatgo = NULL;
    SDL_Surface* Start = SDL_LoadBMP("Resources/cb.bmp");
    SDL_Surface* Shotok = SDL_LoadBMP("Resources/LOL1.bmp");
    SDL_Surface* Nyancat1 = SDL_LoadBMP("Resources/Mario_droite.bmp");
    SDL_Surface* Nyancat2 = SDL_LoadBMP("Resources/Niancatdroite.bmp");
    SDL_Surface* Nyancat3 = SDL_LoadBMP("Resources/Niancatgauche.bmp");
    SDL_Surface* Nyancat4 = SDL_LoadBMP("Resources/Niancatgauche.bmp");
    SDL_Surface* Nyancat5= SDL_LoadBMP("Resources/Mario_droite.bmp");
    SDL_Surface* Nyancat6 = SDL_LoadBMP("Resources/Niancatdroite.bmp");
    SDL_Surface* Evilnyan = SDL_LoadBMP("Resources/Niancatgauche.bmp");
    SDL_Surface* Nyan = SDL_LoadBMP("Resources/Niancatdroite.bmp");
    SDL_Surface* Evil = SDL_LoadBMP("Resources/Mario_droite.bmp");
    SDL_Surface* Gameover1 = NULL;
    SDL_Surface* Gameover = SDL_LoadBMP("Resources/mlol.bmp");
    SDL_Surface* Myface = SDL_LoadBMP("Resources/mlolol.bmp");
    SDL_Surface* Hello = SDL_LoadBMP("Resources/Hello.bmp");
    SDL_Surface* Scary = SDL_LoadBMP("Resources/scary.bmp");
    SDL_Surface* OMG = SDL_LoadBMP("Resources/OMG.bmp");
    SDL_Surface* sorry = SDL_LoadBMP("Resources/sorry.bmp");
    printf("lol");
    SDL_Surface* Difficulty =NULL;
    SDL_Surface* Difficultyinit = SDL_LoadBMP("Resources/Difficulty.bmp");
    Difficulty = Difficultyinit;
    SDL_Surface* Missile = SDL_LoadBMP("Resources/missile.bmp");
    SDL_Surface* Missilenow = NULL;
    SDL_Surface* Hooh;
    SDL_Surface* Flow = SDL_LoadBMP("Resources/flow.bmp");
    SDL_Surface* Hoohup = SDL_LoadBMP("Resources/hoohdown.bmp");
    SDL_Surface* Hoohdown = SDL_LoadBMP("Resources/hooh.bmp");
    SDL_Surface* Troll = SDL_LoadBMP("Resources/troll.bmp");
    SDL_Surface* Scissor = NULL;
    SDL_Surface* Flyingscissor1 = SDL_LoadBMP("Resources/flyingpoke1.bmp");
    SDL_Surface* Flyingscissor2 = SDL_LoadBMP("Resources/flyingpoke2.bmp");
    SDL_Surface* Trainer = NULL;
    SDL_Surface* Flyingtrainer = SDL_LoadBMP("Resources/traineronpoke.bmp");
    SDL_Surface* Trainerdown = SDL_LoadBMP("Resources/trainer.bmp");
    SDL_Surface* Trainerotherway = SDL_LoadBMP("Resources/trainerotherway.bmp");
    SDL_Surface* Parolehooh = NULL;
    SDL_Surface* Parolehoohok = SDL_LoadBMP("Resources/parolehooh.bmp");
    SDL_Surface* Tube = SDL_LoadBMP("Resources/tube.bmp");
    SDL_Surface* Bush = SDL_LoadBMP("Resources/bush.bmp");
    SDL_Surface* Mario = NULL;
    SDL_Surface* Mariotube = SDL_LoadBMP("Resources/Marioup.bmp");
    SDL_Surface* Parolemario = NULL;
    SDL_Surface* Parolemariohell = SDL_LoadBMP("Resources/parolemario.bmp");
    SDL_Surface* Exclamation = SDL_LoadBMP("Resources/exclamation.bmp");
    SDL_Surface* Whatchogonnado = SDL_LoadBMP("Resources/Whatchogonnado.bmp");
    SDL_Surface* Parolefire = SDL_LoadBMP("Resources/parolefire.bmp");
    SDL_Surface* Fireball = NULL;
    SDL_Surface* Fireok = SDL_LoadBMP("Resources/fireball.bmp");
    SDL_Surface* Trainerhit = SDL_LoadBMP("Resources/trainerhit.bmp");
    SDL_Surface* Sunglasses = SDL_LoadBMP("Resources/sunglasses.bmp");
    SDL_Surface* Sunglassesok = NULL;
    SDL_Surface* Mariodown = NULL;
    SDL_Surface* Thankyouforplaying = SDL_LoadBMP("Resources/thankyouforplayingsuite.bmp");
    SDL_Surface* Pissoff = SDL_LoadBMP("Resources/pissoff.bmp");
    SDL_Surface* Hoohpetitdown = SDL_LoadBMP("Resources/hoohpetitdown.bmp");
    SDL_Surface* Hoohpetitup = SDL_LoadBMP("Resources/hoohpetitup.bmp");
    SDL_Surface* Hoohpetit = NULL;
    SDL_Rect Positionhoohpetit;
    SDL_Rect Positionthankyouforplaying;
    Positionthankyouforplaying.x = 0;
    Positionthankyouforplaying.y = 0;
    SDL_Rect Positionbush[3];
    Positionbush[1].x = 120;
    Positionbush[1].y = 430;
    Positionbush[2].x = 320;
    Positionbush[2].y = 430;
    Positionbush[3].x = 420;
    Positionbush[3].y = 430;
    SDL_Rect Positiontube;
    Positiontube.x = 153;
    Positiontube.y = 206;
    SDL_Rect Positionmario;
    Positionmario.x = Positiontube.x + 10;
    Positionmario.y = Positiontube.y + 40;
    SDL_Rect Positionfire;
    Positionfire.x = Positionmario.x - 80;
    Positionfire.y = Positionmario.y - 150;
    SDL_Rect Positionparolemario;
    Positionparolemario.x = Positionmario.x + 15;
    Positionparolemario.y = Positionmario.y + 15;
    SDL_Rect Positiontrainerdown;
    SDL_Rect Positionsunglasses;
    Positionsunglasses.x = Positionmario.x + 13;
    Positionsunglasses.y = 0;
    SDL_Rect Positionflyingscissor;
    Positionflyingscissor.x = 0;
    Positionflyingscissor.y = 70;
    SDL_Rect Positiontrainer;
    Positiontrainer.x = Positionflyingscissor.x + 19;
    Positiontrainer.y = Positionflyingscissor.y - 7;
    SDL_Rect Positionmariodown;
    SDL_Rect Positionparolehooh;
    SDL_Rect Positionhooh;
    Positionhooh.x = 0;
    Positionhooh.y = 80;
    SDL_Rect Positionflow[50];
    Positionflow[1].x = 0;
    Positionflow[1].y = 40;
    Positionflow[2].x = 70;
    Positionflow[2].y = 60;
    Positionflow[3].x = 180;
    Positionflow[3].y = 50;
    Positionflow[4].x = 360;
    Positionflow[4].y = 60;
    Positionflow[5].x = 480;
    Positionflow[5].y = 40;
    SDL_Rect Positiondifficulty;
    Positiondifficulty.x= 0;
    Positiondifficulty.y= 0;
    SDL_Rect Positionsorry;
    Positionsorry.x = 0;
    Positionsorry.y = 0;
    SDL_Rect Positionomg;
    Positionomg.x = 0;
    Positionomg.y = 0;
    SDL_Rect Positionscary;
    Positionscary.x = 480;
    Positionscary.y = 70;
    SDL_Rect Positionhello;
    Positionhello.x = 0;
    Positionhello.y = 75;
    SDL_Rect Positionmyface;
    Positionmyface.x = 0;
    Positionmyface.y = 0;
    SDL_Rect Positiongameover;
    Positiongameover.x = 0;
    Positiongameover.y = 0;
    SDL_Rect Positionstart;
    Positionstart.x = 0;
    Positionstart.y = 0;
    SDL_Rect Positionnyancatgo;
    Positionnyancatgo.x = 570;
    Positionnyancatgo.y = 305;
    SDL_Rect Positionnyancat3;
    Positionnyancat3.x = 310;
    Positionnyancat3.y = 400;
    SDL_Rect Positionnyancat4;
    Positionnyancat4.x = 40;
    Positionnyancat4.y = 400;
    SDL_Rect Positionnyancat5;
    Positionnyancat5.x = 400;
    Positionnyancat5.y = 400;
    SDL_Rect Positionnyancat6;
    Positionnyancat6.x = 490;
    Positionnyancat6.y = 400;
    SDL_Rect Positionshot11;
    Positionshot11.x=Positionnuage.x + 38;
    Positionshot11.y = Positionnuage.y + 15;
    SDL_Rect Positionscore;
    Positionscore.x = 500;
    Positionscore.y = 3;
    SDL_SetColorKey(Boul,SDL_SRCCOLORKEY,SDL_MapRGB(Boul->format,255,255,255));
    SDL_SetColorKey(Nyancat1,SDL_SRCCOLORKEY,SDL_MapRGB(Nyancat1->format,0,0,255));
    SDL_SetColorKey(Nyancat2,SDL_SRCCOLORKEY,SDL_MapRGB(Nyancat2->format,0,0,255));
    SDL_SetColorKey(Nyancat3,SDL_SRCCOLORKEY,SDL_MapRGB(Nyancat3->format,0,0,255));
    SDL_SetColorKey(Nyancat4,SDL_SRCCOLORKEY,SDL_MapRGB(Nyancat4->format,0,0,255));
    SDL_SetColorKey(Nyancat5,SDL_SRCCOLORKEY,SDL_MapRGB(Nyancat5->format,0,0,255));
    SDL_SetColorKey(Nyancat6,SDL_SRCCOLORKEY,SDL_MapRGB(Nyancat6->format,0,0,255));
    SDL_SetColorKey(Missile,SDL_SRCCOLORKEY,SDL_MapRGB(Missile->format,0,0,255));
    SDL_SetColorKey(Nyan,SDL_SRCCOLORKEY,SDL_MapRGB(Nyan->format,0,0,255));
    SDL_SetColorKey(Evilnyan,SDL_SRCCOLORKEY,SDL_MapRGB(Evilnyan->format,0,0,255));
    SDL_SetColorKey(Evil,SDL_SRCCOLORKEY,SDL_MapRGB(Evil->format,0,0,255));
    SDL_SetColorKey(Flow,SDL_SRCCOLORKEY,SDL_MapRGB(Flow->format,0,0,255));
    SDL_SetColorKey(Hoohup,SDL_SRCCOLORKEY,SDL_MapRGB(Hoohup->format,0,0,255));
    SDL_SetColorKey(Hoohdown,SDL_SRCCOLORKEY,SDL_MapRGB(Hoohdown->format,0,0,255));
    SDL_SetColorKey(Nyancatotherway,SDL_SRCCOLORKEY,SDL_MapRGB(Nyancatotherway->format,0,0,255));
    SDL_SetColorKey(Myface,SDL_SRCCOLORKEY,SDL_MapRGB(Myface->format,255,174,201));
    SDL_SetColorKey(Hello,SDL_SRCCOLORKEY,SDL_MapRGB(Myface->format,0,0,255));
    SDL_SetColorKey(Superman,SDL_SRCCOLORKEY,SDL_MapRGB(Superman->format,0,128,0));
    SDL_SetColorKey(Scary,SDL_SRCCOLORKEY,SDL_MapRGB(Scary->format,255,174,201));
    SDL_SetColorKey(Troll,SDL_SRCCOLORKEY,SDL_MapRGB(Troll->format,0,0,255));
    SDL_SetColorKey(Flyingscissor1,SDL_SRCCOLORKEY,SDL_MapRGB(Flyingscissor1->format,0,0,255));
    SDL_SetColorKey(Flyingscissor2,SDL_SRCCOLORKEY,SDL_MapRGB(Flyingscissor2->format,0,0,255));
    SDL_SetColorKey(Flyingtrainer,SDL_SRCCOLORKEY,SDL_MapRGB(Flyingtrainer->format,0,0,255));
    SDL_SetColorKey(Trainerdown,SDL_SRCCOLORKEY,SDL_MapRGB(Trainerdown->format,0,0,255));
    SDL_SetColorKey(Parolehoohok,SDL_SRCCOLORKEY,SDL_MapRGB(Parolehoohok->format,0,0,255));
    SDL_SetColorKey(Tube,SDL_SRCCOLORKEY,SDL_MapRGB(Tube->format,0,0,255));
    SDL_SetColorKey(Bush,SDL_SRCCOLORKEY,SDL_MapRGB(Bush->format,0,0,255));
    SDL_SetColorKey(Mariotube,SDL_SRCCOLORKEY,SDL_MapRGB(Mariotube->format,0,0,255));
    SDL_SetColorKey(Parolemariohell,SDL_SRCCOLORKEY,SDL_MapRGB(Parolemariohell->format,0,0,255));
    SDL_SetColorKey(Exclamation,SDL_SRCCOLORKEY,SDL_MapRGB(Exclamation->format,0,0,255));
    SDL_SetColorKey(Trainerotherway,SDL_SRCCOLORKEY,SDL_MapRGB(Trainerotherway->format,0,0,255));
    SDL_SetColorKey(Whatchogonnado,SDL_SRCCOLORKEY,SDL_MapRGB(Whatchogonnado->format,0,0,255));
    SDL_SetColorKey(Parolefire,SDL_SRCCOLORKEY,SDL_MapRGB(Parolefire->format,0,0,255));
    SDL_SetColorKey(Fireok,SDL_SRCCOLORKEY,SDL_MapRGB(Fireok->format,0,0,255));
    SDL_SetColorKey(Trainerhit,SDL_SRCCOLORKEY,SDL_MapRGB(Trainerhit->format,0,0,255));
    SDL_SetColorKey(Sunglasses,SDL_SRCCOLORKEY,SDL_MapRGB(Sunglasses->format,0,0,255));
    SDL_SetColorKey(Hoohpetitdown,SDL_SRCCOLORKEY,SDL_MapRGB(Hoohpetitdown->format,0,0,255));
    SDL_SetColorKey(Hoohpetitup,SDL_SRCCOLORKEY,SDL_MapRGB(Hoohpetitup->format,0,0,255));
    SDL_SetColorKey(Paroleshit,SDL_SRCCOLORKEY,SDL_MapRGB(Paroleshit->format,0,0,255));
    SDL_SetAlpha(Flow, SDL_SRCALPHA, 128);
    SDL_WM_SetCaption("KAKA + KAKA = KAKABOOM",NULL);
    SDL_WM_SetIcon(Troll, NULL);
    while (continuer)
    {
        SDL_PollEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_KEYUP:
            switch (event.key.keysym.sym)
            {
            case SDLK_SPACE:
                Shot = NULL;
                Missilenow = NULL;
                Positionshot11.x=Positionnuage.x + 38;
                Positionshot11.y = Positionnuage.y + 15;
                Nomouvement = 0;
                break;
            }
            break;
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                case SDLK_1:
                    if (finallydone == 1)
                    {
                     Difficulty = SDL_LoadBMP("Resources/noeasy.bmp");
                    }
                    lolmlol = 1;
                    break;
                case SDLK_3:
                    if (finallydone == 1)
                    {
                     if (lolmlol == 1||Difficulty == Difficultyinit)
                     {
                         select = 1;
                     }
                     Difficulty = NULL;
                    }
                    break;
                case SDLK_2:
                    if (finallydone == 1)
                    {
                     Difficulty = NULL;
                    }
                    break;

                case SDLK_ESCAPE:
                    Start = NULL;
                    finallydone = 1;
                    break;
                case SDLK_LEFT:
                    Positionnuage.x--;
                    Positionshot11.x=Positionnuage.x;
                    break;
                case SDLK_RIGHT:
                    if (Positionnuage.x < 545)
                    {
                        Positionnuage.x++;
                    }
                    Positionshot11.x=Positionnuage.x;
                    break;
                case SDLK_SPACE:
                    debut += 1;
                    if (debut == 1)
                    {
                        score+= 250;
                    }
                Nomouvement = 1;
                Positionshot11.x=Positionnuage.x + 38;
                hitbox = 1;
                Missilenow = Missile;
                Shot  = Shotok;
                Positionshot11.y += 11;
                if (Positionshot11.y > 480)
                {
                Positionshot11.x=Positionnuage.x + 38;
                Positionshot11.y = Positionnuage.y + 15;
                }
                if (Positionshot11.y == Positionnyancat3.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition1 = Positionnyancat3.x + a;
                          if (Newposition1 == Positionshot11.x)
                          {
                              if (Nyancat3 == Evilnyan)
                              {
                                  score+= 250;
                              }
                            Nyancat3 = Evil ;
                          }
                               if (Nyancat3 == Evil)
                               {
                                Nyancat1=Evilnyan;
                                if (Positionshot11.y == Positionnyancat1.y)
                                {
                                     for (int a = 0; a <57; a++)
                                    {
                                    int Newposition2 = Positionnyancat1.x + a;
                                     if (Newposition2 == Positionshot11.x)
                                     {
                                         if (Nyancat1 == Evilnyan)
                              {
                                  score+= 250;
                              }
                                     Nyancat1 = Evil;

                                       if (Nyancat1 == Evil)
                                       {select = 0;
                                           Nyancat3 = Evilnyan;
                                       }
                                     }
                                    }
                                }

                                }
                    }

                }
                if (Positionshot11.y == Positionnyancat4.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition1 = Positionnyancat4.x + a;
                          if (Newposition1 == Positionshot11.x)
                          {
                            if (Nyancat4 == Evilnyan)
                              {
                                  score+= 250;
                              }
                            Nyancat4 = Evil;

                          }
                               if (Nyancat4 == Evil)
                               {
                                Nyancat5=Evilnyan;
                                if (Positionshot11.y == Positionnyancat5.y)
                                {
                                     for (int a = 0; a <57; a++)
                                    {
                                    int Newposition2 = Positionnyancat5.x + a;
                                     if (Newposition2 == Positionshot11.x)
                                     {
                                    if (Nyancat5 == Evilnyan)
                              {
                                  score+= 250;
                              }
                                     Nyancat5 = Evil;
                                       if (Nyancat5 == Evil)
                                       {
                                           Nyancat4 = Evilnyan;
                                       }
                                     }
                                    }
                                }

                                }
                    }

                }
        if (Nyancat4== Evilnyan)
        {
            if (Nyancat1 == Evilnyan)
            {
                 if (Positionshot11.y == Positionnyancat6.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat6.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         Gameover1 = Gameover;
                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat5.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat5.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         score-=20;
                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat3.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat3.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         score-=20;
                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat2.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat2.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         Gameover1 = Gameover;

                        }
                    }
                }
            }
        }
        if (Nyancat3== Evilnyan)
        {
            if (Nyancat4 == Evilnyan)
            {

                 if (Positionshot11.y == Positionnyancat6.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat6.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         Gameover1 = Gameover;

                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat5.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat5.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         score-=20;
                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat1.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat1.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         score-=20;
                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat2.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat2.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         Gameover1 = Gameover;
                        }
                    }
                }
            }
        }

            if (Nyancat3== Evilnyan)
        {
            if (Nyancat5 == Evilnyan)
            {
                 if (Positionshot11.y == Positionnyancat6.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat6.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         Gameover1 = Gameover;

                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat1.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat1.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         score-=20;
                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat4.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat4.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         score-=20;
                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat2.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat2.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         Gameover1 = Gameover;

                        }
                    }
                }
            }
        }
        if (Nyancat1== Evilnyan)
        {
            if (Nyancat5 == Evilnyan)
            {
                 if (Positionshot11.y == Positionnyancat6.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat6.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         Gameover1 = Gameover;

                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat3.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat3.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         score-=20;
                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat4.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat4.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         score-=20;
                        }
                    }
                }
                if (Positionshot11.y == Positionnyancat2.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancat2.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         Gameover1 = Gameover;

                        }
                    }
                }

            }
        }
                break;
                }
                break;
        }
        int finally = 0;
        for (int k = 0; k < 70; k++)
        {
            int newlol = k;
            if (event.motion.x == newlol)
            {
                for (int kk = 0; kk < 20; kk++)
                {
                    int newposition2 = 480 - kk;
                    if (event.motion.y == newposition2)
                    {
                        finally = 1;
                    }
                }
            }
        }
        tempsActuelmente = SDL_GetTicks();
        if (tempsActuelmente - tempsPrecedentFlow > 10)
        {
            int a = 2000;
            if (a == 2000)
            {
            Positionnyancat1.x += (a-1999);
            Positionnyancat2.x += (a-1999);
            Positionnyancat3.x += (a-1999);
            Positionnyancat4.x += (a-1999);
            Positionnyancat5.x += (a-1999);
            Positionnyancat6.x += (a-1999);
            a = 0;
            }
            if (Positionnyancat1.x == 640)
            {
            Positionnyancat1.x = 0;
            }
            if (Positionnyancat2.x == 640)
            {
            Positionnyancat2.x = 0;
            }
            if (Positionnyancat3.x == 640)
            {
            Positionnyancat3.x = 0;
            }
            if (Positionnyancat4.x == 640)
            {
            Positionnyancat4.x = 0;
            }
            if (Positionnyancat5.x == 640)
            {
            Positionnyancat5.x = 0;
            }
            if (Positionnyancat6.x == 640)
            {
            Positionnyancat6.x = 0;
            }
            if (select >= 0)
            {
             if (done == 0)
             {
              Nyancatgo = Nyancatotherway;
              Positionnyancatgo.x--;
             }
            if (Positionnyancatgo.x == 0)
            {
                Nyancatgo = Nyan;
                done = 1;
            }
            if (done == 1)
            {
                Positionnyancatgo.x++;
                if (Positionnyancatgo.x == 570)
                {
                    done = 0;
                }
            }
            int Newpositionnyancatgo = (Positionshot11.y - 18);
               if (Newpositionnyancatgo == Positionnyancatgo.y)
                {
                    for (int a = 0; a <57; a++)
                    {
                        int Newposition = Positionnyancatgo.x + a;
                        if (Newposition == Positionshot11.x)
                        {
                         Gameover1 = Gameover;

                        }
                    }
                }
            }
           if (select == 1)
           {
            Positionsuperman.y--;
            if (Positionsuperman.y == 0)
            {
               Positionsuperman.x = Positionnuage.x + 21;
               Positionsuperman.y = 500;
            }
           for (int pluss = 0; pluss < 76; pluss++)
           {
            int Newpositionvaisseauy = Positionnuage.y + pluss;
            for (int pluss1 = 0; pluss1 < 84; pluss1++)
            {
               int Newpositionsupermany = Positionsuperman.y + pluss1;
             if (Newpositionsupermany == Newpositionvaisseauy)
            {
             for (int pluss2 = 0; pluss2 < 76; pluss2++)
             {
                 int Newpositionvaissaux = Positionnuage.x + pluss2;
                 for (int pluss3 = 0; pluss3 < 33 ; pluss3++)
                 {
                  int Newpositionsupermax = Positionsuperman.x + pluss3;
                  if (Newpositionsupermax == Newpositionvaissaux)
                  {
                   Gameover1=Gameover;
                  }
                 }
             }
            }
            }
           }
        }
        }
        if (tempsActuelmente - tempsPrecedentFlow > 200)
        {
            for (int nbr= 0 ;nbr < 6 ;nbr++)
            {
                Positionflow[nbr].x++;
            if (Positionflow[nbr].x == 620)
            {
                Positionflow[nbr].x = 0;
            }
            }
            tempsPrecedentFlow = tempsActuelmente;
        }

            if (tempsActuelmente - tempsHoohpetit > 40)
            {
                Positionhoohpetit.x--;
                tempsHoohpetit = tempsActuelmente;
            }
            if (Positionhoohpetit.x == 0)
            {
                Hoohpetitup = NULL;
                Hoohpetit = NULL;
                Hoohpetitdown = NULL;
            }



             if (tempsActuelmente - tempsPrecedenteScissor > 10)
             {
                 Positionmario.y--;
                 Positionparolemario.y--;
               if (Scissorstop == 0)
               {
               Positionflyingscissor.x++;
               }
               if (Positionflyingscissor.x == 240)
               {
               Scissordown = 1;
               }
               Positiontrainer.x = Positionflyingscissor.x + 19;
               if (Scissordown == 1)
                 {
                     Positiontrainer.x = Positionflyingscissor.x + 19;
                     Positiontrainer.y = Positionflyingscissor.y - 7;
                     Positionflyingscissor.x++;
                     Positionflyingscissor.y++;
                 }
                 Positionhooh.x++;
                 tempsPrecedenteScissor = tempsActuelmente;
             }
             if (Positionflyingscissor.y == 133)
                 {
                     Scissorstop = 1;
                     Scissordown = 0;
                     Scissor = NULL;
                     Trainer = Trainerdown;
                     waktdabberrassekscissor = 1;
                 }




             if (waktdabberrassekscissor == 0)
             {
               if (tempsActuelmente - tempsPrecedamente > 200)
                {
                dabberrasekhooh++;
                if ((dabberrasekhooh % 2) == 0)
                {
                 Hoohpetit = Hoohpetitup;
                 Hooh = Hoohup;
                 Scissor = Flyingscissor1;
                 Positiontrainer.x = Positionflyingscissor.x + 19;
                 Positiontrainer.y = Positionflyingscissor.y - 9;
                 Trainer = Flyingtrainer;
                 }
                 if ((dabberrasekhooh % 2) != 0)
                 {
                 Hoohpetit = Hoohpetitdown;
                 Positionhooh.y = 70;
                 Hooh = Hoohdown;
                 Scissor = Flyingscissor2;
                 Positiontrainer.x = Positionflyingscissor.x + 19;
                 Positiontrainer.y = Positionflyingscissor.y - 7;
                 Trainer = Flyingtrainer;
                 }
             tempsPrecedamente = tempsActuelmente;
               }
             }
        sprintf(scorenow, "Score : %d", score);
        SDL_Surface* scores = TTF_RenderText_Shaded(police,scorenow,couleurNoire,couleurNoire);
        SDL_SetColorKey(scores,SDL_SRCCOLORKEY,SDL_MapRGB(scores->format,0,0,255));
        int tempsPrecedent = 0;
        int tempsActuel = 0;
        tempsActuel = SDL_GetTicks();
        if (tempsActuel - tempsPrecedent < 70000)
        {
            Hooh = NULL;
            Positionhooh.x = 0;
        }if (tempsActuel - tempsPrecedent < 78000)
        {
            Parolehooh = NULL;
            Trainer = NULL;
            Scissor = NULL;
            Positionflyingscissor.x = 0;
        }
        if (tempsActuel - tempsPrecedent > 84000)
            {
            Positionparolehooh.x = Positiontrainer.x + 25;
            Positionparolehooh.y = Positiontrainer.y + 16;
            Parolehooh = Parolehoohok;
            }
        if (tempsActuel - tempsPrecedent < 88000)
            {
             Positionmario.x = Positiontube.x + 10;
             Positionmario.y = 246;
             Positionparolemario.x = Positionmario.x + 15;
             Positionparolemario.y = Positionmario.y + 15;
            }
        if (tempsActuel - tempsPrecedent > 88000)
            {
                 Mario = Mariotube;
            }
            if (tempsActuel - tempsPrecedent > 88900)
            {
                Positionmario.y = 170;
                Positionparolemario.x = Positionmario.x + 25;
                Positionparolemario.y = Positionmario.y - 10;
            }
            if (tempsActuel - tempsPrecedent > 89500)
            {
                Parolemario = Exclamation;
            }
            if (tempsActuel - tempsPrecedent > 90000)
            {
                Positionparolemario.x = Positionmario.x + 15;
                Positionparolemario.y = Positionmario.y + 15;
                Parolemario = Parolemariohell;
            }
            if (tempsActuel - tempsPrecedent > 91000)
            {
                Parolehooh = NULL;
                Trainer = Trainerotherway;
            }
            if (tempsActuel - tempsPrecedent > 92000)
            {
                Parolemario = NULL;
                Positionparolehooh.x = Positiontrainer.x - 85;
                Parolehooh = Whatchogonnado;
            }
            if (tempsActuel - tempsPrecedent > 94000)
            {
                Positionparolehooh.x = Positiontrainer.x - 95;
                Parolehooh = Parolefire;
            }
            if (tempsActuel - tempsPrecedent > 96000)
            {
                Parolehooh = NULL;
            }
            if (tempsActuel - tempsPrecedent < 100000)
            {
                if (tempsActuel - tempsPrecedent > 99000)
                {
                    Fireball = Fireok;
                    Positionfire.y--;
                }
            }
            if (tempsActuel - tempsPrecedent > 100000)
            {
                Parolehooh = Paroleshit;
                Positionfire.x++;
            }
            if (tempsActuel - tempsPrecedent > 100100)
            {
                Parolehooh = NULL;
                Trainer = Trainerhit;
            }
            if (tempsActuel - tempsPrecedent > 100500)
            {
                Hooh = NULL;
                Trainer = NULL;
            }
            if (tempsActuel - tempsPrecedent < 105500)
            {
                Positionsunglasses.x = Positionmario.x + 3;
                Positionsunglasses.y = 0;
            }
           if (tempsActuel - tempsPrecedent > 105500)
           {
                if (tempsActuelmente - tempsPrecedamente > 50)
                {
                Positionsunglasses.y++;
                tempsPrecedamente = tempsActuelmente;
                }
                Sunglassesok = Sunglasses;
           }
           if (tempsActuel - tempsPrecedent > 114680)
           {
            if (donesunglasses == 0)
            {
             Positionsunglasses.y = 179;
             Fireball = NULL;
            }
           }




        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 128, 255));
        SDL_BlitSurface(Hoohpetit,NULL,ecran,&Positionhoohpetit);
        SDL_BlitSurface(Flow,NULL,ecran,&Positionflow[1]);
        SDL_BlitSurface(Flow,NULL,ecran,&Positionflow[2]);
        SDL_BlitSurface(Flow,NULL,ecran,&Positionflow[3]);
        SDL_BlitSurface(Flow,NULL,ecran,&Positionflow[4]);
        SDL_BlitSurface(Flow,NULL,ecran,&Positionflow[5]);
        SDL_BlitSurface(Hooh,NULL,ecran,&Positionhooh);
        SDL_BlitSurface(Trainer,NULL,ecran,&Positiontrainer);
        SDL_BlitSurface(Scissor,NULL,ecran,&Positionflyingscissor);
        SDL_BlitSurface(Nyancat1,NULL,ecran,&Positionnyancat1);
        SDL_BlitSurface(Nyancat2,NULL,ecran,&Positionnyancat2);
        SDL_BlitSurface(Nyancat3,NULL,ecran,&Positionnyancat3);
        SDL_BlitSurface(sol,NULL,ecran,&Positionsol);
        SDL_BlitSurface(Shot,NULL,ecran,&Positionshot11);
        SDL_Rect Positionmissile;
        Positionmissile.x= Positionshot11.x - 6;
        Positionmissile.y= Positionshot11.y - 20;
        SDL_BlitSurface(Missilenow,NULL,ecran,&Positionmissile);
        SDL_BlitSurface(Nyancat1,NULL,ecran,&Positionnyancat1);
        SDL_BlitSurface(Nyancat2,NULL,ecran,&Positionnyancat2);
        SDL_BlitSurface(Nyancat3,NULL,ecran,&Positionnyancat3);
        SDL_BlitSurface(Nyancat4,NULL,ecran,&Positionnyancat4);
        SDL_BlitSurface(Nyancat5,NULL,ecran,&Positionnyancat5);
        SDL_BlitSurface(Nyancat6,NULL,ecran,&Positionnyancat6);
        SDL_BlitSurface(Bush,NULL,ecran,&Positionbush[1]);
        SDL_BlitSurface(Bush,NULL,ecran,&Positionbush[2]);
        SDL_BlitSurface(Bush,NULL,ecran,&Positionbush[3]);
        SDL_BlitSurface(Nyancatgo,NULL,ecran,&Positionnyancatgo);
        SDL_BlitSurface(Superman,NULL,ecran,&Positionsuperman);
        SDL_BlitSurface(Mario,NULL,ecran,&Positionmario);
        SDL_BlitSurface(Sunglassesok,NULL,ecran,&Positionsunglasses);
        SDL_BlitSurface(plateforme,NULL,ecran,&Positionplateforme1);
        SDL_BlitSurface(plateforme,NULL,ecran,&Positionplateforme2);
        SDL_BlitSurface(plateforme,NULL,ecran,&Positionplateforme3);
        SDL_BlitSurface(Tube,NULL,ecran,&Positiontube);
        SDL_BlitSurface(Parolehooh,NULL,ecran,&Positionparolehooh);
        SDL_BlitSurface(Parolemario,NULL,ecran,&Positionparolemario);
        if (Positionnuage.x == 450)
        {
            Positionscore.x = 10;
        }
        if (Positionnuage.x == 70)
        {
            Positionscore.x = 500;
        }
        SDL_BlitSurface(scores, NULL, ecran, &Positionscore);
        SDL_BlitSurface(Boul,NULL,ecran,&Positionnuage);
        SDL_BlitSurface(Fireball,NULL,ecran,&Positionfire);
        if (tempsActuel - tempsPrecedent < 36000)
        {
         Hoohpetit = NULL;
         Positionhoohpetit.x = 620;
         Positionhoohpetit.y = 60;
        }
        if (tempsActuel - tempsPrecedent > 60000)
        {
        SDL_BlitSurface(Scary,NULL,ecran,&Positionscary);
        }
        if (tempsActuel - tempsPrecedent > 63000)
        {
        Scary = NULL;
        SDL_BlitSurface(OMG,NULL,ecran,&Positionomg);
        }
        if (tempsActuel - tempsPrecedent > 63150)
        {
        OMG = NULL;
        SDL_BlitSurface(sorry,NULL,ecran,&Positionsorry);
        }
        if ( tempsActuel - tempsPrecedent > 64000)
        {
            sorry = NULL;
        }
        if (finallydone == 1)
        {
            SDL_BlitSurface(Difficulty,NULL,ecran,&Positiondifficulty);
        }
        SDL_BlitSurface(Start,NULL,ecran,&Positionstart);
        if (finallydone == 0)
        {
            if (finally == 1)
            {
             SDL_BlitSurface(Myface,NULL,ecran,&Positionmyface);
             SDL_BlitSurface(Hello,NULL,ecran,&Positionhello);
            }
        }
        if (Gameover1 == Gameover)
        {
        SDL_Surface* ecran = SDL_SetVideoMode(663,399,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
        Gameover1 = Gameover;
        SDL_BlitSurface(Gameover1,NULL,ecran,&Positiongameover);
        donestage = 1;
        }
        if (Start == NULL)
        {
            SDL_ShowCursor(SDL_DISABLE);
        }
        if ( tempsActuel - tempsPrecedent > 150000)
        {
            if  (donestage == 0)
            {
             if (donethank == 0)
             {
              SDL_Surface* ecran = SDL_SetVideoMode(425,612,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
             }
             SDL_BlitSurface(Thankyouforplaying,NULL,ecran,&Positiongameover);
            }
        }
        if ( tempsActuel - tempsPrecedent > 154000)
        {
            if  (donestage == 0)
            {
             donethank = 1;
             SDL_Surface* ecran = SDL_SetVideoMode(580,480,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
             SDL_BlitSurface(Pissoff,NULL,ecran,&Positiongameover);
            }
        }
        if ( tempsActuel - tempsPrecedent > 155000)
        {
           continuer = 0;
        }
        SDL_FreeSurface(scores);
        SDL_Flip(ecran);
    }
    TTF_CloseFont(police);
    TTF_Quit();
    SDL_FreeSurface(plateforme);
    SDL_FreeSurface(sol);
    SDL_FreeSurface(plateforme);
    SDL_FreeSurface(sol);
    SDL_FreeSurface(Nyan);
    SDL_FreeSurface(Evil);
    SDL_FreeSurface(Evilnyan);
    SDL_FreeSurface(Nyancat1);
    SDL_FreeSurface(Nyancat2);
    SDL_FreeSurface(Nyancat3);
    SDL_FreeSurface(Nyancat4);
    SDL_FreeSurface(Nyancat5);
    SDL_FreeSurface(Nyancat6);
    SDL_FreeSurface(OMG);
    SDL_FreeSurface(Hooh);
    SDL_FreeSurface(Hoohdown);
    SDL_FreeSurface(Hoohup);
    SDL_FreeSurface(Start);
    SDL_FreeSurface(Gameover1);
    SDL_FreeSurface(Gameover);
    SDL_FreeSurface(Superman);
    SDL_FreeSurface(Nyancatgo);
    SDL_FreeSurface(Nyancatotherway);
    SDL_FreeSurface(Myface);
    SDL_FreeSurface(Hello);
    SDL_FreeSurface(Scary);
    SDL_FreeSurface(sorry);
    SDL_FreeSurface(Missile);
    SDL_FreeSurface(Missilenow);
    SDL_FreeSurface(Troll);
    SDL_FreeSurface(Flow);
    SDL_Quit();
    FMOD_System_Close(system);
    FMOD_System_Release(system);
}
