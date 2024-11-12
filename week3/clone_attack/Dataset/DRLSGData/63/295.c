int main () {
    int w8WDoT;
    int Rj3G47NlMh0r;
    int X9TX0dq3mQF [(372 - 272)] [(249 - 149)];
    int Lzm8nc6yQU [100] [100];
    int q4SfIp9sdT6m [100] [100];
    int peVkJZIqR;
    int JQjkAcrW;
    int wqu6dpE;
    int TodRyESaus;
    int S2ToNIzR;
    int hM0RUc;
    int udBxeFXtS;
    peVkJZIqR = (790 - 790);
    cin >> JQjkAcrW >> wqu6dpE;
    for (S2ToNIzR = (630 - 630); JQjkAcrW > S2ToNIzR; S2ToNIzR++)
        for (hM0RUc = (884 - 884); wqu6dpE > hM0RUc; hM0RUc++) {
            cin >> X9TX0dq3mQF[S2ToNIzR][hM0RUc];
        }
    cin >> Rj3G47NlMh0r >> TodRyESaus;
    for (S2ToNIzR = (549 - 549); Rj3G47NlMh0r > S2ToNIzR; S2ToNIzR++)
        for (hM0RUc = (307 - 307); TodRyESaus > hM0RUc; hM0RUc++) {
            cin >> Lzm8nc6yQU[S2ToNIzR][hM0RUc];
        }
    if (wqu6dpE != Rj3G47NlMh0r)
        cout << "error!" << endl;
    else {
        for (S2ToNIzR = (50 - 50); JQjkAcrW > S2ToNIzR; S2ToNIzR++) {
            hM0RUc = 196 - 196;
            while (TodRyESaus > hM0RUc) {
                q4SfIp9sdT6m[S2ToNIzR][hM0RUc] = (80 - 80);
                hM0RUc++;
            }
        }
        for (S2ToNIzR = (277 - 277); JQjkAcrW > S2ToNIzR; S2ToNIzR++) {
            peVkJZIqR = 0;
            for (hM0RUc = 0; TodRyESaus > hM0RUc; hM0RUc++)
                for (w8WDoT = 0; Rj3G47NlMh0r > w8WDoT; w8WDoT++)
                    q4SfIp9sdT6m[S2ToNIzR][hM0RUc] = q4SfIp9sdT6m[S2ToNIzR][hM0RUc] + X9TX0dq3mQF[S2ToNIzR][w8WDoT] * Lzm8nc6yQU[w8WDoT][hM0RUc];
        }
        for (S2ToNIzR = 0; JQjkAcrW > S2ToNIzR; S2ToNIzR++) {
            for (hM0RUc = 0; TodRyESaus -(356 - 355) > hM0RUc; hM0RUc++) {
                cout << q4SfIp9sdT6m[S2ToNIzR][hM0RUc] << " ";
            }
            cout << q4SfIp9sdT6m[S2ToNIzR][TodRyESaus -1] << endl;
        }
    }
    return 0;
}

