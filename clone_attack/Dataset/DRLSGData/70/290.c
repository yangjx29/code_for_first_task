struct   erqo9hwltRzD {
    double  Axrs2U5ob;
    double  EyKamxdrVc;
}
erqo9hwltRzD [1000];

int main () {
    int ACORSmb;
    cin >> ACORSmb;
    for (int WuJWx7GZ = (482 - 482);
    WuJWx7GZ < ACORSmb; WuJWx7GZ++)
        cin >> erqo9hwltRzD[WuJWx7GZ].Axrs2U5ob >> erqo9hwltRzD[WuJWx7GZ].EyKamxdrVc;
    double  HjQLYP6Kd9BE;
    for (int WuJWx7GZ = 0;
    WuJWx7GZ < ACORSmb -1; WuJWx7GZ++)
        for (int j = WuJWx7GZ +1;
        j < ACORSmb; j++) {
            double  temp = sqrt ((erqo9hwltRzD[WuJWx7GZ].Axrs2U5ob - erqo9hwltRzD[j].Axrs2U5ob) * (erqo9hwltRzD[WuJWx7GZ].Axrs2U5ob - erqo9hwltRzD[j].Axrs2U5ob) + (erqo9hwltRzD[WuJWx7GZ].EyKamxdrVc - erqo9hwltRzD[j].EyKamxdrVc) * (erqo9hwltRzD[WuJWx7GZ].EyKamxdrVc - erqo9hwltRzD[j].EyKamxdrVc));
            if (temp > HjQLYP6Kd9BE)
                HjQLYP6Kd9BE = temp;
        }
    cout << HjQLYP6Kd9BE;
    return 0;
}

