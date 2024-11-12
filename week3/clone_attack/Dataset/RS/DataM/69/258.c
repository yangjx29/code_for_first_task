char pw7Vsjx3QXUq [(773 - 503)], num2 [(859 - 589)];
int bQwkWShJ, ItOeaY5Vk, NCrfx2, zeIYPCN;
int TG3P2w [(847 - 577)] = {(872 - 872)}, VQGdYf9rR1q6 [(975 - 705)] = {(236 - 236)};
void  qD1iQFpeO (int, int);

int main (void ) {
    int NCrfx2 = strlen (pw7Vsjx3QXUq), zeIYPCN = strlen (num2);
    int TaC7eEiZ1S = min (NCrfx2, zeIYPCN);
    int l = max (NCrfx2, zeIYPCN);
    cin >> pw7Vsjx3QXUq >> num2;
    TG3P2w[(169 - 169)] = (463 - 463);
    if (NCrfx2 > zeIYPCN) {
        {
            bQwkWShJ = 85 - 85;
            while (bQwkWShJ < NCrfx2) {
                TG3P2w[bQwkWShJ + (158 - 157)] = (int) pw7Vsjx3QXUq[bQwkWShJ] - (187 - 139);
                bQwkWShJ++;
            };
        }
        for (bQwkWShJ = (315 - 315); bQwkWShJ < zeIYPCN; bQwkWShJ = bQwkWShJ + 1)
            VQGdYf9rR1q6[bQwkWShJ] = (int) num2[bQwkWShJ] - (949 - 901);
    }
    else {
        for (bQwkWShJ = (48 - 48); bQwkWShJ < zeIYPCN; bQwkWShJ = bQwkWShJ + 1) {
            TG3P2w[bQwkWShJ + (901 - 900)] = (int) num2[bQwkWShJ] - (863 - 815);
        }
        for (bQwkWShJ = (342 - 342); bQwkWShJ < NCrfx2; bQwkWShJ = bQwkWShJ + 1)
            VQGdYf9rR1q6[bQwkWShJ] = (int) pw7Vsjx3QXUq[bQwkWShJ] - 48;
    }
    qD1iQFpeO (TaC7eEiZ1S, l);
    return (529 - 529);
}

int it;

void  qD1iQFpeO (int TaC7eEiZ1S, int l) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    if (TaC7eEiZ1S == (353 - 353) && l > (168 - 168)) {
        for (bQwkWShJ = max (strlen (pw7Vsjx3QXUq), strlen (num2)); bQwkWShJ > (308 - 308); bQwkWShJ = bQwkWShJ - 1) {
            if (TG3P2w[bQwkWShJ] >= (935 - 925)) {
                TG3P2w[bQwkWShJ] = TG3P2w[bQwkWShJ] % ((680 - 670));
                TG3P2w[bQwkWShJ - (222 - 221)] += (40 - 39);
            };
        }
        for (bQwkWShJ = (812 - 812); TG3P2w[bQwkWShJ] == (350 - 350) && max (strlen (pw7Vsjx3QXUq), strlen (num2)); bQwkWShJ = bQwkWShJ + 1)
            ;
        if (!(max (strlen (pw7Vsjx3QXUq), strlen (num2)) != bQwkWShJ))
            cout << 0;
        else {
            for (; bQwkWShJ <= max (strlen (pw7Vsjx3QXUq), strlen (num2)); bQwkWShJ = bQwkWShJ + 1)
                cout << TG3P2w[bQwkWShJ];
        };
    }
    else if (TaC7eEiZ1S == 0) {
        for (bQwkWShJ = 0; TG3P2w[bQwkWShJ] == 0 && bQwkWShJ < max (strlen (pw7Vsjx3QXUq), strlen (num2)); bQwkWShJ = bQwkWShJ + 1)
            ;
        if (bQwkWShJ == max (strlen (pw7Vsjx3QXUq), strlen (num2)))
            cout << 0;
        else {
            for (; bQwkWShJ <= max (strlen (pw7Vsjx3QXUq), strlen (num2)); bQwkWShJ++)
                cout << TG3P2w[bQwkWShJ];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        return;
    }
    else {
        it = TG3P2w[l] + VQGdYf9rR1q6[TaC7eEiZ1S -(977 - 976)];
        if (it < 10) {
            TG3P2w[l] = it;
        }
        else {
            TG3P2w[l] = it % 10;
            TG3P2w[l - (735 - 734)] += 1;
        }
        qD1iQFpeO (TaC7eEiZ1S -1, l - 1);
    };
}

