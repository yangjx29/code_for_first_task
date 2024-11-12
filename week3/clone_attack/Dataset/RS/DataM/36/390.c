char bomJGh6OK8f [(356 - 346)] = {'\0'}, A1IkKgz [10] = {'\0'};
char i9UnVESZ [10] = {'\0'};
int JLhBucJfkyaZ [10] = {0}, j6Momb = 0, YL12ju = 0, KFOnysA = 0;

void  iwMkslKJ (int ZecfZjT9iawG) {
    {
        int zjA9p8w = 0;
        while (j6Momb > zjA9p8w) {
            if (!JLhBucJfkyaZ[zjA9p8w]) {
                i9UnVESZ[ZecfZjT9iawG] = bomJGh6OK8f[zjA9p8w];
                JLhBucJfkyaZ[zjA9p8w] = 1;
                iwMkslKJ (ZecfZjT9iawG +1);
                JLhBucJfkyaZ[zjA9p8w] = 0;
            }
            zjA9p8w = zjA9p8w + 1;
        };
    }
    if (!(j6Momb - 1 != ZecfZjT9iawG)) {
        if (!(0 != strcmp (i9UnVESZ, A1IkKgz)))
            YL12ju = 1;
        else
            YL12ju = 0;
        KFOnysA = KFOnysA +YL12ju;
    };
}

int main () {
    int zjA9p8w;
    cin >> bomJGh6OK8f >> A1IkKgz;
    {
        zjA9p8w = 0;
        while (10 > zjA9p8w) {
            if (bomJGh6OK8f[zjA9p8w] != '\0')
                j6Momb = j6Momb + 1;
            zjA9p8w++;
        };
    }
    iwMkslKJ (0);
    if (KFOnysA != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

