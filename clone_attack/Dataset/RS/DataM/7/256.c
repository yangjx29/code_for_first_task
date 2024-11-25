int main () {
    int t;
    int i;
    int j;
    t = 0;
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
    char Kv8nNUXdqi [(301 - 41)], yZWLM05s [(358 - 338)], rep [20];
    scanf ("%s%s%s", Kv8nNUXdqi, yZWLM05s, rep);
    {
        i = 0;
        while (i < strlen (Kv8nNUXdqi)) {
            if (Kv8nNUXdqi[i] == yZWLM05s[0]) {
                {
                    j = i + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j < i + strlen (yZWLM05s)) {
                        if (!(yZWLM05s[j - i] == Kv8nNUXdqi[j])) {
                            t = 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            };
                        }
                        j++;
                    };
                }
                if (t == 0) {
                    {
                        int JZlMRb = i;
                        while (JZlMRb < i + strlen (yZWLM05s)) {
                            Kv8nNUXdqi[JZlMRb] = rep[JZlMRb -i];
                            JZlMRb = JZlMRb +1;
                        };
                    }
                    break;
                };
            }
            i++;
            t = 0;
        };
    }
    printf ("%s", Kv8nNUXdqi);
    return 0;
}

