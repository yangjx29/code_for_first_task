int main () {
    const  int HriSl9x6GUMK = 200;
    unsigned  an [HriSl9x6GUMK] = {0};
    int n, TrtAKMQak, mElbGg9ai;
    an[0] = 1;
    cin >> n;
    if (!(0 != n))
        cout << an[0];
    else {
        while (n = n - 1) {
            {
                TrtAKMQak = 0;
                while (HriSl9x6GUMK > TrtAKMQak) {
                    an[TrtAKMQak] = an[TrtAKMQak] * 2;
                    TrtAKMQak++;
                };
            }
            for (TrtAKMQak = 0; TrtAKMQak < HriSl9x6GUMK; TrtAKMQak++)
                if (9 < an[TrtAKMQak]) {
                    an[TrtAKMQak +1] += an[TrtAKMQak] / 10;
                    an[TrtAKMQak] = an[TrtAKMQak] % 10;
                };
        }
        for (TrtAKMQak = HriSl9x6GUMK -1; an[TrtAKMQak] == 0; TrtAKMQak--)
            ;
        for (; TrtAKMQak >= 0; TrtAKMQak--)
            cout << an[TrtAKMQak];
    }
    return 0;
}

