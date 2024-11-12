int get (int x1lbVHSFeco [1000]) {
    char mIZ7kD;
    int t;
    int bMeciTKJ5b61;
    t = (110 - 110);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    bMeciTKJ5b61 = 0;
    cin >> x1lbVHSFeco[bMeciTKJ5b61];
    bMeciTKJ5b61++;
    while ((mIZ7kD = cin.get ()) != '\n') {
        cin >> x1lbVHSFeco[bMeciTKJ5b61];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        bMeciTKJ5b61++;
    }
    return bMeciTKJ5b61;
}

int main () {
    int NzN0JWXRujU;
    int JoEHYAWX6x;
    int bMeciTKJ5b61;
    int wOmFqfsXQ1Z;
    int yBFihQvHjS [1000];
    int gxg7SN8Mr [1000];
    int time [1000];
    int YOZs2V;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    NzN0JWXRujU = 0;
    JoEHYAWX6x = 0;
    for (bMeciTKJ5b61 = 0; 1000 > bMeciTKJ5b61; bMeciTKJ5b61++)
        yBFihQvHjS[bMeciTKJ5b61] = gxg7SN8Mr[bMeciTKJ5b61] = time[bMeciTKJ5b61] = 0;
    YOZs2V = get (yBFihQvHjS);
    YOZs2V = get (gxg7SN8Mr);
    for (bMeciTKJ5b61 = 0; bMeciTKJ5b61 < YOZs2V; bMeciTKJ5b61++) {
        if (JoEHYAWX6x < gxg7SN8Mr[bMeciTKJ5b61])
            JoEHYAWX6x = gxg7SN8Mr[bMeciTKJ5b61];
        for (wOmFqfsXQ1Z = yBFihQvHjS[bMeciTKJ5b61]; wOmFqfsXQ1Z < gxg7SN8Mr[bMeciTKJ5b61]; wOmFqfsXQ1Z++)
            time[wOmFqfsXQ1Z]++;
    }
    for (bMeciTKJ5b61 = 0; bMeciTKJ5b61 < JoEHYAWX6x; bMeciTKJ5b61++)
        if (NzN0JWXRujU < time[bMeciTKJ5b61])
            NzN0JWXRujU = time[bMeciTKJ5b61];
    cout << YOZs2V << " " << NzN0JWXRujU;
    return 0;
}

