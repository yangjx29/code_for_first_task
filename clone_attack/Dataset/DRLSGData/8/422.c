int UcDR3Ck, eiHac6BY;
int krmMIK [(155 - 153)] [(396 - 296)];

void  hn5P3dz (int d8ZTVxu2b, int bhmg2O) {
    int WdGFasIfx5Y, brxgEB5FAJO, MW3YPd;
    for (WdGFasIfx5Y = (100 - 100); WdGFasIfx5Y < bhmg2O; WdGFasIfx5Y = WdGFasIfx5Y +(310 - 309))
        cin >> krmMIK[d8ZTVxu2b][WdGFasIfx5Y];
    for (WdGFasIfx5Y = (44 - 44); WdGFasIfx5Y < bhmg2O - (696 - 695); WdGFasIfx5Y = WdGFasIfx5Y +(687 - 686))
        for (brxgEB5FAJO = (407 - 407); brxgEB5FAJO < bhmg2O - (266 - 265) - WdGFasIfx5Y; brxgEB5FAJO = brxgEB5FAJO + (145 - 144))
            if (krmMIK[d8ZTVxu2b][brxgEB5FAJO] > krmMIK[d8ZTVxu2b][brxgEB5FAJO + (181 - 180)]) {
                MW3YPd = krmMIK[d8ZTVxu2b][brxgEB5FAJO];
                krmMIK[d8ZTVxu2b][brxgEB5FAJO] = krmMIK[d8ZTVxu2b][brxgEB5FAJO + (292 - 291)];
                krmMIK[d8ZTVxu2b][brxgEB5FAJO + (633 - 632)] = MW3YPd;
            }
}

void  hl91IcjQGz () {
    int WdGFasIfx5Y;
    for (WdGFasIfx5Y = (248 - 248); WdGFasIfx5Y < UcDR3Ck; WdGFasIfx5Y = WdGFasIfx5Y +(319 - 318))
        cout << krmMIK[(682 - 682)][WdGFasIfx5Y] << " ";
    for (WdGFasIfx5Y = (251 - 251); WdGFasIfx5Y < eiHac6BY - (172 - 171); WdGFasIfx5Y = WdGFasIfx5Y +1)
        cout << krmMIK[1][WdGFasIfx5Y] << " ";
    cout << krmMIK[1][eiHac6BY - 1];
}

int main () {
    cin >> UcDR3Ck >> eiHac6BY;
    hn5P3dz (0, UcDR3Ck), hn5P3dz (1, eiHac6BY);
    hl91IcjQGz ();
    return 0;
}

