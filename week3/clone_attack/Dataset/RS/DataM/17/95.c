int main () {
    char rqxgECoSVND [1000], UyW9VdLY [1000];
    for (; cin.getline (rqxgECoSVND, 1000);) {
        int CEbfrG0D;
        int R0BjGHVM [1000];
        CEbfrG0D = 0;
        for (int lINwy6bpEnM = 1;
        strlen (rqxgECoSVND) >= lINwy6bpEnM; lINwy6bpEnM = lINwy6bpEnM + 1)
            UyW9VdLY[lINwy6bpEnM - 1] = ' ';
        UyW9VdLY[strlen (rqxgECoSVND)] = '\0';
        {
            int lINwy6bpEnM = 1;
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
            while (lINwy6bpEnM <= strlen (rqxgECoSVND)) {
                if (!('(' != rqxgECoSVND[lINwy6bpEnM - 1])) {
                    CEbfrG0D = CEbfrG0D +1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    R0BjGHVM[CEbfrG0D] = lINwy6bpEnM;
                }
                else if (rqxgECoSVND[lINwy6bpEnM - 1] == ')') {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if (CEbfrG0D > 0) {
                        R0BjGHVM[CEbfrG0D] = 0;
                        CEbfrG0D--;
                    }
                    else {
                        UyW9VdLY[lINwy6bpEnM - 1] = '?';
                    };
                }
                lINwy6bpEnM = lINwy6bpEnM + 1;
            };
        }
        for (int lINwy6bpEnM = 1;
        lINwy6bpEnM <= CEbfrG0D; lINwy6bpEnM = lINwy6bpEnM + 1)
            UyW9VdLY[R0BjGHVM[lINwy6bpEnM] - 1] = '$';
        cout << rqxgECoSVND << endl << UyW9VdLY << endl;
    }
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
    return 0;
}

