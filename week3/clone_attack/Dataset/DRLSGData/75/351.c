int main () {
    char rDJE9x0cnq;
    int o1a7dVkIi;
    int J8TbCYOqKI5;
    int fNG762Ta;
    int PMJtjkDbv8 [(2841 - 841)];
    int EWUJAFVl [(2134 - 134)];
    int wqJOuW [(2905 - 905)];
    o1a7dVkIi = (586 - 586);
    J8TbCYOqKI5 = (100 - 100);
    {
        fNG762Ta = (696 - 696);
        for (; fNG762Ta < (2135 - 135);) {
            PMJtjkDbv8[fNG762Ta] = (300 - 300);
            EWUJAFVl[fNG762Ta] = (312 - 312);
            wqJOuW[fNG762Ta] = (822 - 822);
            fNG762Ta++;
        }
    }
    for (; (227 - 226);) {
        rDJE9x0cnq = getchar ();
        if (rDJE9x0cnq == '\n') {
            o1a7dVkIi++;
            break;
        }
        else {
            if (rDJE9x0cnq >= '0' && rDJE9x0cnq <= '9')
                PMJtjkDbv8[o1a7dVkIi] = PMJtjkDbv8[o1a7dVkIi] * (789 - 779) + rDJE9x0cnq - '0';
            else
                o1a7dVkIi++;
        }
    }
    o1a7dVkIi = (915 - 915);
    for (; 1;) {
        rDJE9x0cnq = getchar ();
        if (rDJE9x0cnq == '\n') {
            o1a7dVkIi++;
            break;
        }
        else {
            if (rDJE9x0cnq >= '0' && rDJE9x0cnq <= '9')
                EWUJAFVl[o1a7dVkIi] = EWUJAFVl[o1a7dVkIi] * (589 - 579) + rDJE9x0cnq - '0';
            else
                o1a7dVkIi++;
        }
    }
    printf ("%d ", o1a7dVkIi);
    {
        o1a7dVkIi--;
        for (; o1a7dVkIi >= (301 - 301);) {
            fNG762Ta = o1a7dVkIi;
            for (; fNG762Ta < EWUJAFVl[o1a7dVkIi];) {
                wqJOuW[fNG762Ta]++;
                fNG762Ta++;
            }
            o1a7dVkIi--;
        }
    }
    {
        o1a7dVkIi = 0;
        for (; o1a7dVkIi < (2704 - 704);) {
            if (wqJOuW[o1a7dVkIi] > J8TbCYOqKI5)
                J8TbCYOqKI5 = wqJOuW[o1a7dVkIi];
            o1a7dVkIi++;
        }
    }
    printf ("%d", J8TbCYOqKI5);
    return 0;
}

