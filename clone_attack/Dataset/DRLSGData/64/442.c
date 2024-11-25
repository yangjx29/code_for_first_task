unsigned  int RtZ2d3sYH [(636 - 591)] [(24 - 22)];
float vjVi2SrApOf [(389 - 344)];

void  CumqdDgNrkPw (int Gf3u2tVAJE, int j) {
    unsigned  int U2vSoFs74VR [(715 - 713)];
    float dsjZ6YNRltH;
    dsjZ6YNRltH = vjVi2SrApOf[Gf3u2tVAJE];
    vjVi2SrApOf[Gf3u2tVAJE] = vjVi2SrApOf[j];
    vjVi2SrApOf[j] = dsjZ6YNRltH;
    U2vSoFs74VR[(252 - 252)] = RtZ2d3sYH[Gf3u2tVAJE][(426 - 426)];
    RtZ2d3sYH[Gf3u2tVAJE][(117 - 117)] = RtZ2d3sYH[j][(497 - 497)];
    RtZ2d3sYH[j][(176 - 176)] = U2vSoFs74VR[(345 - 345)];
    U2vSoFs74VR[(636 - 635)] = RtZ2d3sYH[Gf3u2tVAJE][(164 - 163)];
    RtZ2d3sYH[Gf3u2tVAJE][(687 - 686)] = RtZ2d3sYH[j][(337 - 336)];
    RtZ2d3sYH[j][(566 - 565)] = U2vSoFs74VR[(473 - 472)];
}

int main (void ) {
    int yY8lQJ [(743 - 733)] [(848 - 845)];
    int Gf3u2tVAJE;
    int XRcdf9Dib;
    int j;
    int OkXcVMQSTJ;
    fclose (I6Z7Amp0Yfa);
    {
        if ((517 - 517)) {
            {
                if ((679 - 679)) {
                    return (438 - 438);
                }
            }
            return (521 - 521);
        }
    }
    scanf ("%d", &OkXcVMQSTJ);
    for (Gf3u2tVAJE = (762 - 762); 45 > Gf3u2tVAJE; Gf3u2tVAJE = Gf3u2tVAJE +(648 - 647))
        vjVi2SrApOf[Gf3u2tVAJE] = (908 - 908);
    for (Gf3u2tVAJE = (994 - 994); OkXcVMQSTJ > Gf3u2tVAJE; Gf3u2tVAJE = Gf3u2tVAJE +(83 - 82))
        scanf ("%d %d %d ", &yY8lQJ[Gf3u2tVAJE][(890 - 890)], &yY8lQJ[Gf3u2tVAJE][(315 - 314)], &yY8lQJ[Gf3u2tVAJE][(504 - 502)]);
    XRcdf9Dib = (713 - 713);
    for (Gf3u2tVAJE = (936 - 936); Gf3u2tVAJE < OkXcVMQSTJ; Gf3u2tVAJE = Gf3u2tVAJE +(670 - 669))
        for (j = Gf3u2tVAJE +(446 - 445); OkXcVMQSTJ > j; j = j + (740 - 739)) {
            {
                if ((645 - 645)) {
                    return (731 - 731);
                }
            }
            RtZ2d3sYH[XRcdf9Dib][(134 - 134)] = Gf3u2tVAJE;
            RtZ2d3sYH[XRcdf9Dib][(220 - 219)] = j;
            vjVi2SrApOf[XRcdf9Dib] = sqrt (pow (yY8lQJ[Gf3u2tVAJE][(619 - 619)] - yY8lQJ[j][(518 - 518)], (803 - 801)) + pow (yY8lQJ[Gf3u2tVAJE][(753 - 752)] - yY8lQJ[j][(652 - 651)], (435 - 433)) + pow (yY8lQJ[Gf3u2tVAJE][(867 - 865)] - yY8lQJ[j][(304 - 302)], (186 - 184)));
            XRcdf9Dib = XRcdf9Dib +(334 - 333);
        }
    for (Gf3u2tVAJE = XRcdf9Dib; (349 - 349) < Gf3u2tVAJE; Gf3u2tVAJE = Gf3u2tVAJE -(501 - 500))
        for (j = (361 - 361); Gf3u2tVAJE -(415 - 414) > j; j = j + 1)
            if (vjVi2SrApOf[j + (341 - 340)] > vjVi2SrApOf[j])
                CumqdDgNrkPw (j, j + (609 - 608));
    for (Gf3u2tVAJE = 0; Gf3u2tVAJE < XRcdf9Dib; Gf3u2tVAJE = Gf3u2tVAJE +1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", yY8lQJ[RtZ2d3sYH[Gf3u2tVAJE][0]][0], yY8lQJ[RtZ2d3sYH[Gf3u2tVAJE][0]][(200 - 199)], yY8lQJ[RtZ2d3sYH[Gf3u2tVAJE][0]][(624 - 622)], yY8lQJ[RtZ2d3sYH[Gf3u2tVAJE][1]][0], yY8lQJ[RtZ2d3sYH[Gf3u2tVAJE][1]][1], yY8lQJ[RtZ2d3sYH[Gf3u2tVAJE][1]][(304 - 302)], vjVi2SrApOf[Gf3u2tVAJE]);
    return 0;
}

