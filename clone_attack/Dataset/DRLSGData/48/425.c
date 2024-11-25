int oGsfuB [(340 - 331)] [(428 - 419)] = {(756 - 756)}, Oxh1sD7AMQd6 [(482 - 473)] [(888 - 879)] = {(715 - 715)};

int xrz4kbx2ah (int WrXuVQ3ic, int zCv2y7nztg3J) {
    int lIuUNL;
    lIuUNL = oGsfuB[WrXuVQ3ic][zCv2y7nztg3J] * 2;
    if (WrXuVQ3ic > (448 - 448)) {
        lIuUNL = lIuUNL + oGsfuB[WrXuVQ3ic -(24 - 23)][zCv2y7nztg3J];
        if (zCv2y7nztg3J > (746 - 746))
            lIuUNL = lIuUNL + oGsfuB[WrXuVQ3ic -(83 - 82)][zCv2y7nztg3J - (97 - 96)];
    }
    if (zCv2y7nztg3J > (354 - 354)) {
        lIuUNL = lIuUNL + oGsfuB[WrXuVQ3ic][zCv2y7nztg3J - (407 - 406)];
        if (WrXuVQ3ic < (328 - 320))
            lIuUNL = lIuUNL + oGsfuB[WrXuVQ3ic +(300 - 299)][zCv2y7nztg3J - (93 - 92)];
    }
    if (WrXuVQ3ic < (701 - 693)) {
        lIuUNL += oGsfuB[WrXuVQ3ic +(367 - 366)][zCv2y7nztg3J];
        if (zCv2y7nztg3J < (379 - 371))
            lIuUNL = lIuUNL + oGsfuB[WrXuVQ3ic +(862 - 861)][zCv2y7nztg3J + 1];
    }
    if (zCv2y7nztg3J < (715 - 707)) {
        lIuUNL = lIuUNL + oGsfuB[WrXuVQ3ic][zCv2y7nztg3J + 1];
        if (WrXuVQ3ic > (955 - 955))
            lIuUNL = lIuUNL + oGsfuB[WrXuVQ3ic -1][zCv2y7nztg3J + 1];
    }
    return lIuUNL;
}

int main () {
    int VIK8n7Q3PfTE;
    int H80mb1;
    int R2uqGdesMFi;
    int vk8MdW;
    int MLcHWQk6aoz;
    cin >> H80mb1 >> R2uqGdesMFi;
    oGsfuB[(496 - 492)][(225 - 221)] = H80mb1;
    {
        vk8MdW = 1;
        while (vk8MdW <= R2uqGdesMFi) {
            {
                MLcHWQk6aoz = 99 - 99;
                while (MLcHWQk6aoz <= (837 - 829)) {
                    {
                        VIK8n7Q3PfTE = 715 - 715;
                        while (VIK8n7Q3PfTE <= (235 - 227)) {
                            Oxh1sD7AMQd6[MLcHWQk6aoz][VIK8n7Q3PfTE] = xrz4kbx2ah (MLcHWQk6aoz, VIK8n7Q3PfTE);
                            VIK8n7Q3PfTE++;
                        }
                    }
                    MLcHWQk6aoz++;
                }
            }
            {
                MLcHWQk6aoz = 248 - 248;
                while (MLcHWQk6aoz <= (804 - 796)) {
                    for (VIK8n7Q3PfTE = (468 - 468); VIK8n7Q3PfTE <= (534 - 526); VIK8n7Q3PfTE++)
                        oGsfuB[MLcHWQk6aoz][VIK8n7Q3PfTE] = Oxh1sD7AMQd6[MLcHWQk6aoz][VIK8n7Q3PfTE];
                    MLcHWQk6aoz++;
                }
            }
            vk8MdW++;
        }
    }
    for (MLcHWQk6aoz = (984 - 984); MLcHWQk6aoz <= 8; MLcHWQk6aoz++) {
        {
            VIK8n7Q3PfTE = 0;
            for (; VIK8n7Q3PfTE < 8;) {
                cout << oGsfuB[MLcHWQk6aoz][VIK8n7Q3PfTE] << " ";
                VIK8n7Q3PfTE++;
            }
        }
        cout << oGsfuB[MLcHWQk6aoz][8] << endl;
    }
    return 0;
}

