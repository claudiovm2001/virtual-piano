#include <stdio.h>
#include <windows.h> // substitui "stdlib" (mmsystem é incompatível com essa).
#include <mmsystem.h> // inclui comando para reprodução de arquivos de áudio nos formatos mais comuns.
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    for (int loop1 = 1; loop1 == 1;)
    {
        system ("cls");

        printf ("\n  || Instrumentos Musicais 1.0, por Cláudio ||\n\n  Selecione um instrumento:\n\n");
        printf ("  1-Violão\n  2-Piano\n  3-Trompete\n  4-Violino\n  ");

        char nota = 0, instrumento = 0;
        instrumento = getch (stdin); system ("cls");

        if (instrumento == '1' || instrumento == '2' || instrumento == '3' || instrumento == '4')
        {
            switch (instrumento)
            {
                 case '1':
                 printf ("||Instrumento atual: Violão||\n\n  Pressione as teclas de 1 a 7 para tocar.\n\n >Para selecionar outro instrumento, pressione 0<.\n");

                 for (int loop2 = 1; loop2 == 1;)
                     {nota = getch (stdin);
                      switch (nota)
                      {
                           case '1': PlaySound (TEXT("guitar_c.wav"), NULL, SND_ASYNC); break; // PlaySound lê e reproduz áudio.
                           case '2': PlaySound (TEXT("guitar_d.wav"), NULL, SND_ASYNC); break;
                           case '3': PlaySound (TEXT("guitar_e.wav"), NULL, SND_ASYNC); break;
                           case '4': PlaySound (TEXT("guitar_f.wav"), NULL, SND_ASYNC); break;
                           case '5': PlaySound (TEXT("guitar_g.wav"), NULL, SND_ASYNC); break;
                           case '6': PlaySound (TEXT("guitar_a.wav"), NULL, SND_ASYNC); break;
                           case '7': PlaySound (TEXT("guitar_b.wav"), NULL, SND_ASYNC); break;
                           case '0': loop2 = 0;
                      }
                     }
                 break;

                 case '2':
                 printf ("||Instrumento atual: Piano||\n\n  Pressione as teclas de 1 a 7 para tocar.\n\n >Para selecionar outro instrumento, pressione 0<.\n");

                 for (int loop2 = 1; loop2 == 1;)
                     {nota = getch (stdin);
                      switch (nota)
                      {
                           case '1': PlaySound (TEXT("piano_c.wav"), NULL, SND_ASYNC); break; // PlaySound lê e reproduz áudio.
                           case '2': PlaySound (TEXT("piano_d.wav"), NULL, SND_ASYNC); break;
                           case '3': PlaySound (TEXT("piano_e.wav"), NULL, SND_ASYNC); break;
                           case '4': PlaySound (TEXT("piano_f.wav"), NULL, SND_ASYNC); break;
                           case '5': PlaySound (TEXT("piano_g.wav"), NULL, SND_ASYNC); break;
                           case '6': PlaySound (TEXT("piano_a.wav"), NULL, SND_ASYNC); break;
                           case '7': PlaySound (TEXT("piano_b.wav"), NULL, SND_ASYNC); break;
                           case '0': loop2 = 0;
                      }
                     }
                 break;

                 case '3':
                 printf ("||Instrumento atual: Trompete||\n\n  Pressione as teclas de 1 a 7 para tocar.\n\n >Para selecionar outro instrumento, pressione 0<.\n");

                 for (int loop2 = 1; loop2 == 1;)
                     {nota = getch (stdin);
                      switch (nota)
                      {
                           case '1': PlaySound (TEXT("trumpet_c.wav"), NULL, SND_ASYNC); break; // PlaySound lê e reproduz áudio.
                           case '2': PlaySound (TEXT("trumpet_d.wav"), NULL, SND_ASYNC); break;
                           case '3': PlaySound (TEXT("trumpet_e.wav"), NULL, SND_ASYNC); break;
                           case '4': PlaySound (TEXT("trumpet_f.wav"), NULL, SND_ASYNC); break;
                           case '5': PlaySound (TEXT("trumpet_g.wav"), NULL, SND_ASYNC); break;
                           case '6': PlaySound (TEXT("trumpet_a.wav"), NULL, SND_ASYNC); break;
                           case '7': PlaySound (TEXT("trumpet_b.wav"), NULL, SND_ASYNC); break;
                           case '0': loop2 = 0;
                      }
                     }
                 break;

                 case '4':
                 printf ("||Instrumento atual: Violino||\n\n  Pressione as teclas de 1 a 7 para tocar.\n\n >Para selecionar outro instrumento, pressione 0<.\n");

                 for (int loop2 = 1; loop2 == 1;)
                     {nota = getch (stdin);
                      switch (nota)
                      {
                           case '1': PlaySound (TEXT("violin_c.wav"), NULL, SND_ASYNC); break; // PlaySound lê e reproduz áudio.
                           case '2': PlaySound (TEXT("violin_d.wav"), NULL, SND_ASYNC); break;
                           case '3': PlaySound (TEXT("violin_e.wav"), NULL, SND_ASYNC); break;
                           case '4': PlaySound (TEXT("violin_f.wav"), NULL, SND_ASYNC); break;
                           case '5': PlaySound (TEXT("violin_g.wav"), NULL, SND_ASYNC); break;
                           case '6': PlaySound (TEXT("violin_a.wav"), NULL, SND_ASYNC); break;
                           case '7': PlaySound (TEXT("violin_b.wav"), NULL, SND_ASYNC); break;
                           case '0': loop2 = 0;
                      }
                     }
                 break;
            }
        }
        else
        {
            printf ("Comando inválido.\n\n"); system ("pause");
        }
    }
    system("pause");
    return 0;
}
