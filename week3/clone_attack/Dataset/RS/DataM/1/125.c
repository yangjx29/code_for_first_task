int f (int ObStiku2vw, int b) {
    int qXePcntBrwh = (150 - 149), gHVz0W2NO1;
    for (gHVz0W2NO1 = b; gHVz0W2NO1 <= sqrt (ObStiku2vw); gHVz0W2NO1++) {
        if (ObStiku2vw % gHVz0W2NO1 == 0)
            qXePcntBrwh += f (ObStiku2vw / gHVz0W2NO1, gHVz0W2NO1);
    }
    return qXePcntBrwh;
}

int main () {
    int gHVz0W2NO1, jsS9IZ, ObStiku2vw;
    cin >> jsS9IZ;
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
    for (gHVz0W2NO1 = 1; gHVz0W2NO1 <= jsS9IZ; gHVz0W2NO1++) {
        cin >> ObStiku2vw;
        cout << f (ObStiku2vw, 2) << endl;
    }
    return 0;
}

