char NzyRkrj4Upf [201];
int EadS1lqpYetC [101];
int i, OSMkOwyPYv, length;
char a, b;
void  Flg4wHzDr56 (char s [], int l);

int main () {
    int OAJGNh;
    OAJGNh = 0;
    cin >> NzyRkrj4Upf;
    length = strlen (NzyRkrj4Upf);
    a = NzyRkrj4Upf[0];
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
    b = NzyRkrj4Upf[length - 1];
    {
        i = 1;
        while (length - 1 >= i) {
            if (!(b != NzyRkrj4Upf[i])) {
                OAJGNh = OAJGNh +1;
                EadS1lqpYetC[OAJGNh] = i;
            }
            i = i + 1;
        };
    }
    Flg4wHzDr56 (NzyRkrj4Upf, 1);
    OSMkOwyPYv = OAJGNh;
    return 0;
}

void  Flg4wHzDr56 (char s [], int l) {
    if (l <= OSMkOwyPYv) {
        {
            i = l;
            while (i >= 0) {
                if (s[i] == a) {
                    cout << i << " " << EadS1lqpYetC[l] << endl;
                    s[i] = '\0';
                    s[EadS1lqpYetC[l]] = '\0';
                    break;
                }
                i--;
            };
        }
        Flg4wHzDr56 (s, l + 1);
    }
    else
        return;
}

