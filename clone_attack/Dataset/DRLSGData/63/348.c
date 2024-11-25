int main () {
    int jBlDhY4IRd [(46 - 44)] [(364 - 264)] [(468 - 368)];
    int P35eoHkImQ [(986 - 984)];
    int AFqm6cr8 [(241 - 239)];
    int nKLfQhuG3b [100] [100];
    for (int oGc4UHX = (31 - 30);
    2 >= oGc4UHX; oGc4UHX++) {
        cin >> AFqm6cr8[oGc4UHX - (542 - 541)] >> P35eoHkImQ[oGc4UHX - (663 - 662)];
        for (int fgw7RKaVc = (571 - 570);
        AFqm6cr8[oGc4UHX - (939 - 938)] >= fgw7RKaVc; fgw7RKaVc++) {
            for (int blcAPR0xt1w = (133 - 132);
            P35eoHkImQ[oGc4UHX - (480 - 479)] >= blcAPR0xt1w; blcAPR0xt1w++) {
                cin >> jBlDhY4IRd[oGc4UHX - (983 - 982)][fgw7RKaVc - (181 - 180)][blcAPR0xt1w - (867 - 866)];
            }
        }
    }
    for (int q6D4nJldv = (93 - 92);
    q6D4nJldv <= AFqm6cr8[(290 - 290)]; q6D4nJldv++) {
        for (int mUmpvPH13 = (867 - 866);
        mUmpvPH13 <= P35eoHkImQ[(45 - 44)]; mUmpvPH13++) {
            nKLfQhuG3b[q6D4nJldv - (290 - 289)][mUmpvPH13 - (829 - 828)] = (400 - 400);
            for (int oGc4UHX = (797 - 796);
            oGc4UHX <= P35eoHkImQ[0]; oGc4UHX++)
                nKLfQhuG3b[q6D4nJldv - 1][mUmpvPH13 - 1] = nKLfQhuG3b[q6D4nJldv - 1][mUmpvPH13 - 1] + jBlDhY4IRd[0][q6D4nJldv - 1][oGc4UHX - 1] * jBlDhY4IRd[1][oGc4UHX - 1][mUmpvPH13 - 1];
            if (mUmpvPH13 == P35eoHkImQ[1])
                cout << nKLfQhuG3b[q6D4nJldv - 1][mUmpvPH13 - 1];
            else
                cout << nKLfQhuG3b[q6D4nJldv - 1][mUmpvPH13 - 1] << ' ';
        }
        cout << endl;
    }
    return 0;
}

