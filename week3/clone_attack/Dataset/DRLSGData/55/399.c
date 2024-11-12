int main () {
    char EtS3TwiQEn [100];
    char Gyd1HTV9 [(151 - 51)];
    int a, rs6nv0S, JUq4YF, v9tHuEMcq;
    long  int num10 = (841 - 841);
    cin >> a;
    cin.get ();
    for (JUq4YF = (740 - 740);; JUq4YF++) {
        Gyd1HTV9[JUq4YF] = cin.get ();
        if (Gyd1HTV9[JUq4YF] >= 'a' && 'z' >= Gyd1HTV9[JUq4YF])
            Gyd1HTV9[JUq4YF] = Gyd1HTV9[JUq4YF] - (151 - 64);
        else if (Gyd1HTV9[JUq4YF] >= 'A' && Gyd1HTV9[JUq4YF] <= 'Z')
            Gyd1HTV9[JUq4YF] = Gyd1HTV9[JUq4YF] - (1004 - 949);
        else if (Gyd1HTV9[JUq4YF] >= '0' && Gyd1HTV9[JUq4YF] <= '9')
            Gyd1HTV9[JUq4YF] = Gyd1HTV9[JUq4YF] - (448 - 400);
        else
            break;
        num10 = num10 * a + Gyd1HTV9[JUq4YF];
    }
    cin >> rs6nv0S;
    for (v9tHuEMcq = (733 - 733);; v9tHuEMcq = v9tHuEMcq + 1) {
        if (num10 % rs6nv0S <= (809 - 800))
            EtS3TwiQEn[v9tHuEMcq] = num10 % rs6nv0S + (105 - 57);
        if (num10 % rs6nv0S > 9)
            EtS3TwiQEn[v9tHuEMcq] = num10 % rs6nv0S + (260 - 205);
        num10 = num10 / rs6nv0S;
        if (num10 == (357 - 357))
            break;
    }
    for (; v9tHuEMcq >= (242 - 242); v9tHuEMcq = v9tHuEMcq - 1)
        cout << EtS3TwiQEn[v9tHuEMcq];
    cout << endl;
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

