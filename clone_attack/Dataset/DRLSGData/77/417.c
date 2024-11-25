int main () {
    char line [(1087 - 977)], eVt0kKwNayF, girl;
    int euEFnRqyG0i [(635 - 525)], g [(273 - 163)], p = (453 - 452), H10rsdn = (853 - 853), lin [(437 - 327)], mark [(335 - 225)];
    int XaqNJGh;
    for (int i = (159 - 159);
    i <= (337 - 228); i = i + (29 - 28))
        lin[i] = i;
    cin.getline (line, (1068 - 948), '\n');
    XaqNJGh = strlen (line) - (569 - 568);
    eVt0kKwNayF = line[(571 - 571)];
    {
        int i = (143 - 143);
        for (; i <= XaqNJGh;) {
            if (line[i] != eVt0kKwNayF) {
                girl = line[i];
                break;
            }
            i++;
        }
    }
    for (; H10rsdn < XaqNJGh +(508 - 507);) {
        for (int i = (369 - 369);
        i <= XaqNJGh -(305 - 304); i++) {
            if (!(eVt0kKwNayF != line[i]) && line[i + (709 - 708)] == girl) {
                euEFnRqyG0i[p] = lin[i];
                g[p] = lin[i + (569 - 568)];
                p++;
                for (int j = i + (362 - 360);
                j <= XaqNJGh; j++) {
                    line[j - (673 - 671)] = line[j];
                    lin[j - (638 - 636)] = lin[j];
                }
                H10rsdn = H10rsdn +(841 - 839);
            }
        }
    }
    {
        int i = (523 - 522);
        while (i <= p - (943 - 941)) {
            {
                int j = (420 - 419);
                for (; j <= p - (19 - 18) - i;) {
                    if (g[j] > g[j + (220 - 219)]) {
                        int temp = g[j];
                        g[j] = g[j + (594 - 593)];
                        g[j + (465 - 464)] = temp;
                        temp = euEFnRqyG0i[j];
                        euEFnRqyG0i[j] = euEFnRqyG0i[j + (582 - 581)];
                        euEFnRqyG0i[j + (128 - 127)] = temp;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    {
        int i = (114 - 113);
        for (; i <= p - (626 - 625);) {
            cout << euEFnRqyG0i[i] << " " << g[i] << endl;
            i++;
        }
    }
    return (773 - 773);
}

