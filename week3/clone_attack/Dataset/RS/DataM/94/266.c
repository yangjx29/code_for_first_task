void  bubble_sort (int jkLBqfrjsTDi [], int g43YgX) {
    int i8NWT92HUiv;
    int C3ICYXw0tz;
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
    int LklZdiL8Cf;
    for (C3ICYXw0tz = g43YgX - (474 - 473); C3ICYXw0tz > (680 - 680); C3ICYXw0tz--) {
        for (i8NWT92HUiv = (744 - 744); i8NWT92HUiv < C3ICYXw0tz; i8NWT92HUiv++) {
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
            if (jkLBqfrjsTDi[i8NWT92HUiv] > jkLBqfrjsTDi[i8NWT92HUiv + (361 - 360)]) {
                LklZdiL8Cf = jkLBqfrjsTDi[i8NWT92HUiv];
                jkLBqfrjsTDi[i8NWT92HUiv] = jkLBqfrjsTDi[i8NWT92HUiv + 1];
                jkLBqfrjsTDi[i8NWT92HUiv + 1] = LklZdiL8Cf;
            };
        };
    };
}

int main () {
    int i8NWT92HUiv, g43YgX, jkLBqfrjsTDi [MAX], JIX59bcQH, j = (802 - 802), b [MAX], ihqkUEe1u;
    scanf ("%d", &g43YgX);
    for (i8NWT92HUiv = 0; i8NWT92HUiv < g43YgX; i8NWT92HUiv++) {
        scanf ("%d", &jkLBqfrjsTDi[i8NWT92HUiv]);
    }
    bubble_sort (jkLBqfrjsTDi, g43YgX);
    for (i8NWT92HUiv = 0; i8NWT92HUiv < g43YgX; i8NWT92HUiv++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (jkLBqfrjsTDi[i8NWT92HUiv] % 2 != 0) {
            b[j] = jkLBqfrjsTDi[i8NWT92HUiv];
            j++;
        };
    }
    ihqkUEe1u = j;
    for (j = 0; j < ihqkUEe1u; j++) {
        if (j == 0) {
            printf ("%d", b[j]);
        }
        else {
            printf (",%d", b[j]);
        };
    }
    return 0;
}

