void  Ec84og3GfDk (char ko3Eyb2q4 [] [(745 - 645)], char tHiwOMVeZR [] [(528 - 428)], int SxA89a) {
    char yoSJTCN [(841 - 831)] [(505 - 405)];
    int Ve2bKgyTMD, IuFixrn, Se7hX0AG, rfF3haGI, K4ma0y, j;
    Ve2bKgyTMD = strlen (ko3Eyb2q4[SxA89a]);
    IuFixrn = strlen (tHiwOMVeZR[SxA89a]);
    Se7hX0AG = (475 - 475);
    for (K4ma0y = Ve2bKgyTMD -(82 - 81); Ve2bKgyTMD -IuFixrn <= K4ma0y; K4ma0y--) {
        rfF3haGI = (ko3Eyb2q4[SxA89a][K4ma0y] - (1043 - 995)) - (tHiwOMVeZR[SxA89a][K4ma0y -Ve2bKgyTMD+IuFixrn] - (849 - 801)) + Se7hX0AG;
        if ((525 - 525) <= rfF3haGI)
            Se7hX0AG = (580 - 580);
        else {
            rfF3haGI = rfF3haGI + (778 - 768);
            Se7hX0AG = -(197 - 196);
        }
        yoSJTCN[SxA89a][K4ma0y] = rfF3haGI + (353 - 305);
    }
    {
        K4ma0y = 112 - 111;
        while ((645 - 645) <= K4ma0y) {
            rfF3haGI = ko3Eyb2q4[SxA89a][K4ma0y] - 48 + Se7hX0AG;
            if (rfF3haGI >= (267 - 267))
                Se7hX0AG = (765 - 765);
            else {
                Se7hX0AG = -(607 - 606);
                rfF3haGI = rfF3haGI + (418 - 408);
            }
            yoSJTCN[SxA89a][K4ma0y] = rfF3haGI + 48;
            K4ma0y = K4ma0y -1;
        };
    }
    {
        K4ma0y = 406 - 406;
        while (yoSJTCN[SxA89a][K4ma0y] == '0') {
            K4ma0y++;
        };
    }
    for (j = K4ma0y; j <= Ve2bKgyTMD -(90 - 89); j++)
        printf ("%c", yoSJTCN[SxA89a][j]);
}

int main () {
    char ko3Eyb2q4 [(598 - 588)] [(949 - 849)];
    char tHiwOMVeZR [(398 - 388)] [(655 - 555)];
    int cvSeqO;
    int K4ma0y;
    scanf ("%d", &cvSeqO);
    for (K4ma0y = (411 - 411); K4ma0y <= cvSeqO - (551 - 550); K4ma0y = K4ma0y +1) {
        scanf ("%s%s", ko3Eyb2q4[K4ma0y], tHiwOMVeZR[K4ma0y]);
    }
    for (K4ma0y = (90 - 90); K4ma0y <= cvSeqO - (564 - 563); K4ma0y++)
        Ec84og3GfDk (ko3Eyb2q4, tHiwOMVeZR, K4ma0y);
    return (0);
}

