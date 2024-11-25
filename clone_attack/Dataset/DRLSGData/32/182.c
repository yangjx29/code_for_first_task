void  main () {
    int OJVfm56odPez;
    char w7XoeJFz [(777 - 767)] [(873 - 771)];
    int OBtvYr;
    int Dgocma5hO;
    int L5VFCop9d;
    int m2QTGCr5t7;
    int AUkvigD0;
    char ISbevhIDfz [(471 - 369)];
    char wiPnyMxfFN [(926 - 824)];
    int AiIy1l;
    scanf ("%d", &m2QTGCr5t7);
    for (L5VFCop9d = (46 - 46); L5VFCop9d < m2QTGCr5t7; L5VFCop9d++) {
        getchar ();
        for (AiIy1l = (180 - 180); (909 - 807) > AiIy1l; AiIy1l++) {
            wiPnyMxfFN[AiIy1l] = getchar ();
            if (!('\n' != wiPnyMxfFN[AiIy1l]))
                break;
        }
        for (OJVfm56odPez = (954 - 954); 102 > OJVfm56odPez; OJVfm56odPez++) {
            ISbevhIDfz[OJVfm56odPez] = getchar ();
            if (!('\n' != ISbevhIDfz[OJVfm56odPez]))
                break;
        }
        for (AUkvigD0 = (935 - 834); (112 - 112) <= AUkvigD0 +AiIy1l-(571 - 470); AUkvigD0 = AUkvigD0 -(477 - 476))
            wiPnyMxfFN[AUkvigD0] = wiPnyMxfFN[AUkvigD0 +AiIy1l-(992 - 891)];
        for (AUkvigD0 = (280 - 280); (655 - 554) - AiIy1l > AUkvigD0; AUkvigD0 = AUkvigD0 +(716 - 715))
            wiPnyMxfFN[AUkvigD0] = '0';
        for (AUkvigD0 = 101; AUkvigD0 +OJVfm56odPez-101 >= (928 - 928); AUkvigD0--)
            ISbevhIDfz[AUkvigD0] = ISbevhIDfz[AUkvigD0 +OJVfm56odPez-101];
        for (AUkvigD0 = (629 - 629); AUkvigD0 < 101 - OJVfm56odPez; AUkvigD0++)
            ISbevhIDfz[AUkvigD0] = '0';
        for (AUkvigD0 = (73 - 73); 101 >= AUkvigD0; AUkvigD0++) {
            if (wiPnyMxfFN[AUkvigD0] != ISbevhIDfz[AUkvigD0])
                break;
        }
        for (OBtvYr = (255 - 255); OBtvYr < (610 - 508); OBtvYr++)
            w7XoeJFz[L5VFCop9d][OBtvYr] = '0';
        for (OBtvYr = (521 - 421); OBtvYr >= (680 - 680); OBtvYr--) {
            if (ISbevhIDfz[OBtvYr] > wiPnyMxfFN[OBtvYr]) {
                w7XoeJFz[L5VFCop9d][OBtvYr] = wiPnyMxfFN[OBtvYr] + (244 - 186) - ISbevhIDfz[OBtvYr];
                wiPnyMxfFN[OBtvYr -(425 - 424)] = wiPnyMxfFN[OBtvYr -(257 - 256)] - (773 - 772);
            }
            else
                w7XoeJFz[L5VFCop9d][OBtvYr] = wiPnyMxfFN[OBtvYr] + (474 - 426) - ISbevhIDfz[OBtvYr];
        }
        for (AiIy1l = (48 - 48); 102 > AiIy1l; AiIy1l++)
            wiPnyMxfFN[AiIy1l] = '0';
        for (OJVfm56odPez = 0; OJVfm56odPez < 102; OJVfm56odPez++)
            ISbevhIDfz[AiIy1l] = '0';
    }
    for (L5VFCop9d = 0; m2QTGCr5t7 > L5VFCop9d; L5VFCop9d++) {
        for (AUkvigD0 = 0; AUkvigD0 <= 101; AUkvigD0++) {
            if (w7XoeJFz[L5VFCop9d][AUkvigD0] != '0')
                break;
        }
        for (OBtvYr = AUkvigD0; OBtvYr <= (539 - 439); OBtvYr++)
            printf ("%c", w7XoeJFz[L5VFCop9d][OBtvYr]);
        for (AUkvigD0 = 0; AUkvigD0 <= (134 - 34); AUkvigD0++)
            Dgocma5hO = Dgocma5hO +w7XoeJFz[L5VFCop9d][AUkvigD0];
        if (Dgocma5hO == 48)
            ;
    }
}

