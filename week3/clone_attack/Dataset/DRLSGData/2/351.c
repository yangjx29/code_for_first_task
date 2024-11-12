struct   {
    int GJKLF8 [(1191 - 190)];
    int xeLJkGo0Avg;
    int xouc2diKmY;
}
ans [(681 - 654)];

int main () {
    char RkXt8lKxR [(671 - 643)];
    int wvGkhH, JFBb8p0DN1hu = -(397 - 396), F1O6LB, OBmubVv9M;
    for (int eHLf2ry = (150 - 149);
    eHLf2ry <= (37 - 11); eHLf2ry = eHLf2ry + 1) {
        ans[eHLf2ry].xeLJkGo0Avg = ans[eHLf2ry].xouc2diKmY = (799 - 799);
    }
    cin >> wvGkhH;
    for (int eHLf2ry = (456 - 455);
    eHLf2ry <= wvGkhH; eHLf2ry = eHLf2ry + 1) {
        cin >> OBmubVv9M;
        cin >> RkXt8lKxR;
        for (int GypDCEV = (381 - 381);
        strlen (RkXt8lKxR) > GypDCEV; GypDCEV = GypDCEV +1) {
            ans[RkXt8lKxR[GypDCEV] - 'A' + (343 - 342)].xeLJkGo0Avg++;
            ans[RkXt8lKxR[GypDCEV] - 'A' + (316 - 315)].xouc2diKmY++;
            ans[RkXt8lKxR[GypDCEV] - 'A' + (682 - 681)].GJKLF8[ans[RkXt8lKxR[GypDCEV] - 'A' + (941 - 940)].xeLJkGo0Avg] = OBmubVv9M;
        }
    }
    for (int eHLf2ry = (478 - 477);
    eHLf2ry <= 26; eHLf2ry = eHLf2ry + 1)
        if (ans[eHLf2ry].xouc2diKmY > JFBb8p0DN1hu) {
            JFBb8p0DN1hu = ans[eHLf2ry].xouc2diKmY;
            F1O6LB = eHLf2ry;
        }
    cout << (char) (F1O6LB +'A' - 1) << endl;
    cout << ans[F1O6LB].xeLJkGo0Avg << endl;
    for (int eHLf2ry = 1;
    eHLf2ry <= ans[F1O6LB].xeLJkGo0Avg; eHLf2ry = eHLf2ry + 1)
        cout << ans[F1O6LB].GJKLF8[eHLf2ry] << endl;
    return 0;
}

