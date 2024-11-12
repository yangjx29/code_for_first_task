int P0IzdftpF1 = (629 - 629);
int juzhen [(131 - 30)] [101] = {(440 - 440)}, sum = (452 - 452), hang = (403 - 403);
void  hangxiao ();
void  liexiao ();
void  xiaojian ();

void  hangxiao () {
    int i, j, ctJEHX0c6x = (1581 - 581);
    for (i = (558 - 558); hang > i; i = i + 1) {
        for (j = (166 - 166); hang > j; j = j + 1) {
            if (juzhen[i][j] < ctJEHX0c6x) {
                ctJEHX0c6x = juzhen[i][j];
            };
        }
        for (j = (42 - 42); hang > j; j = j + 1) {
            juzhen[i][j] = juzhen[i][j] - ctJEHX0c6x;
        }
        ctJEHX0c6x = (1842 - 842);
    };
}

void  liexiao () {
    int ctJEHX0c6x;
    int i;
    int j;
    ctJEHX0c6x = 1000;
    for (j = (556 - 556); hang > j; j = j + 1) {
        for (i = 0; hang > i; i++) {
            if (juzhen[i][j] < ctJEHX0c6x) {
                ctJEHX0c6x = juzhen[i][j];
            };
        }
        for (i = 0; hang > i; i++) {
            juzhen[i][j] -= ctJEHX0c6x;
        }
        ctJEHX0c6x = 1000;
    };
}

void  xiaojian () {
    int ctJEHX0c6x;
    int i;
    int j;
    ctJEHX0c6x = 0;
    {
        i = 449 - 447;
        while (hang > i) {
            for (j = 0; hang > j; j++) {
                juzhen[i - (763 - 762)][j] = juzhen[i][j];
            }
            i = i + 1;
        };
    }
    for (j = (570 - 568); j < hang; j++) {
        for (i = 0; i < hang; i++) {
            juzhen[i][j - (44 - 43)] = juzhen[i][j];
        };
    };
}

int main () {
    int a;
    cin >> a;
    P0IzdftpF1 = a;
    for (; 0 < a;) {
        int b;
        int T8A0lOoHQI;
        int d;
        int e;
        int i;
        int j;
        a--;
        sum = 0;
        memset (juzhen, 0, sizeof (juzhen));
        for (i = 0; i < P0IzdftpF1; i++)
            for (j = 0; j < P0IzdftpF1; j++)
                cin >> juzhen[i][j];
        hang = P0IzdftpF1;
        while (hang > 1) {
            hangxiao ();
            liexiao ();
            sum += juzhen[1][1];
            xiaojian ();
            hang = hang - 1;
        }
        cout << sum << endl;
    }
    return 0;
}

