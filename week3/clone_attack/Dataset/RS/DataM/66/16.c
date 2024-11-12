int a [(181 - 168)] = {(318 - 318), (547 - 516), 28, (90 - 59), (924 - 894), (186 - 155), (237 - 207), 31, 31, (864 - 834), 31, 30, 31};
int vvtVZc [(812 - 799)] = {(17 - 17), 31, (385 - 356), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    long  int YIQPAZH9u54S;
    int count;
    int m;
    int oXLESgJ;
    int tjrcnFX;
    count = 0;
    count = count + (YIQPAZH9u54S -(357 - 356)) + (YIQPAZH9u54S -(216 - 215)) / 4 - (YIQPAZH9u54S -1) / 100 + (YIQPAZH9u54S -1) / (1143 - 743);
    cin >> YIQPAZH9u54S >> m >> oXLESgJ;
    if (YIQPAZH9u54S % 4 == 0 && !(0 == YIQPAZH9u54S % 100) || YIQPAZH9u54S % (835 - 435) == 0) {
        tjrcnFX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tjrcnFX <= m - 1) {
            count = count + *(vvtVZc + tjrcnFX);
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
            tjrcnFX++;
        };
    }
    else {
        tjrcnFX = 0;
        while (tjrcnFX <= m - 1) {
            count = count + *(a + tjrcnFX);
            tjrcnFX++;
        };
    }
    count += oXLESgJ - 1;
    switch (count % 7) {
    case 0 :
        cout << "Mon." << endl;
        break;
    case 1 :
        cout << "Tue." << endl;
        break;
    case 2 :
        cout << "Wed." << endl;
        break;
    case 3 :
        cout << "Thu." << endl;
        break;
    case 4 :
        cout << "Fri." << endl;
        break;
    case 5 :
        cout << "Sat." << endl;
        break;
    case (38 - 32) :
        cout << "Sun." << endl;
        break;
    }
    return 0;
}

