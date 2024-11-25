int wp6wcdz, PWMGVJ0pHEf, temp, qxcBsEY7pg3Z;
int *LyM5DW = NULL, *vQrxAL1 = NULL;

int main () {
    const  int PWMGVJ0pHEf = wp6wcdz;
    int pgi7ONjZ [PWMGVJ0pHEf];
    cin >> wp6wcdz;
    for (qxcBsEY7pg3Z = 0; wp6wcdz > qxcBsEY7pg3Z; qxcBsEY7pg3Z++)
        cin >> pgi7ONjZ[qxcBsEY7pg3Z];
    for (LyM5DW = pgi7ONjZ, vQrxAL1 = pgi7ONjZ + wp6wcdz - 1; LyM5DW < vQrxAL1; LyM5DW++, vQrxAL1--) {
        temp = *LyM5DW;
        *LyM5DW = *vQrxAL1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *vQrxAL1 = temp;
    }
    for (LyM5DW = pgi7ONjZ; pgi7ONjZ + wp6wcdz - 1 > LyM5DW; LyM5DW++)
        cout << *LyM5DW << ' ';
    cout << *LyM5DW << endl;
    return 0;
}

