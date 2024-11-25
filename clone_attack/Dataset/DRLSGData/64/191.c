int main () {
    int Cy0u5Ggas;
    double  Cvde4FluJ [(255 - 244)], YE2RqtvoTz1 [(382 - 371)], S7edCB [(264 - 253)], xAThqERFlg6 [11] [11];
    cin >> Cy0u5Ggas;
    for (int Xhsf1o = (292 - 291);
    Cy0u5Ggas >= Xhsf1o; Xhsf1o = Xhsf1o +(255 - 254))
        cin >> Cvde4FluJ[Xhsf1o] >> YE2RqtvoTz1[Xhsf1o] >> S7edCB[Xhsf1o];
    for (int Xhsf1o = (349 - 348);
    Xhsf1o <= Cy0u5Ggas; Xhsf1o = Xhsf1o +(734 - 733)) {
        for (int hdOKnC56 = Xhsf1o +(366 - 365);
        Cy0u5Ggas >= hdOKnC56; hdOKnC56 = hdOKnC56 + (733 - 732)) {
            xAThqERFlg6[Xhsf1o][hdOKnC56] = (Cvde4FluJ[Xhsf1o] - Cvde4FluJ[hdOKnC56]) * (Cvde4FluJ[Xhsf1o] - Cvde4FluJ[hdOKnC56]) + (YE2RqtvoTz1[Xhsf1o] - YE2RqtvoTz1[hdOKnC56]) * (YE2RqtvoTz1[Xhsf1o] - YE2RqtvoTz1[hdOKnC56]) + (S7edCB[Xhsf1o] - S7edCB[hdOKnC56]) * (S7edCB[Xhsf1o] - S7edCB[hdOKnC56]);
            xAThqERFlg6[Xhsf1o][hdOKnC56] = sqrt (xAThqERFlg6[Xhsf1o][hdOKnC56]);
        }
    }
    for (int pCYGqmxd4 = (296 - 295);
    pCYGqmxd4 <= Cy0u5Ggas *(Cy0u5Ggas -(105 - 104)) / (363 - 361); pCYGqmxd4 = pCYGqmxd4 + 1) {
        int x2rdVEZ = (997 - 997), N8VUO0c3 = (146 - 146);
        double  FM8Ahj = (783 - 783);
        for (int Xhsf1o = (367 - 366);
        Xhsf1o <= Cy0u5Ggas; Xhsf1o = Xhsf1o +1) {
            for (int hdOKnC56 = Xhsf1o +1;
            hdOKnC56 <= Cy0u5Ggas; hdOKnC56 = hdOKnC56 + 1) {
                if (xAThqERFlg6[Xhsf1o][hdOKnC56] > FM8Ahj) {
                    FM8Ahj = xAThqERFlg6[Xhsf1o][hdOKnC56];
                    N8VUO0c3 = hdOKnC56;
                    x2rdVEZ = Xhsf1o;
                }
            }
        }
        cout << "(" << Cvde4FluJ[x2rdVEZ] << "," << YE2RqtvoTz1[x2rdVEZ] << "," << S7edCB[x2rdVEZ] << ")-(" << Cvde4FluJ[N8VUO0c3] << "," << YE2RqtvoTz1[N8VUO0c3] << "," << S7edCB[N8VUO0c3] << ")=";
        printf ("%.2lf\n", xAThqERFlg6[x2rdVEZ][N8VUO0c3]);
        xAThqERFlg6[x2rdVEZ][N8VUO0c3] = (520 - 520);
    }
    return 0;
}

