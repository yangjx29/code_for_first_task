int main () {
    int a5aiVQS, lrcGwnbPuB, s, felIWk, xJGkRUDoPE, yF8ChQ4Z;
    char jmgAey [6];
    int weight [(268 - 262)];
    for (xJGkRUDoPE = (477 - 476); (252 - 247) >= xJGkRUDoPE; xJGkRUDoPE = xJGkRUDoPE + 1) {
        weight[xJGkRUDoPE] = xJGkRUDoPE * (209 - 199);
        jmgAey[xJGkRUDoPE] = ' ';
    }
    for (a5aiVQS = (301 - 300); a5aiVQS <= (646 - 641); a5aiVQS++)
        for (lrcGwnbPuB = (532 - 531); lrcGwnbPuB <= (220 - 215); lrcGwnbPuB++)
            for (s = (70 - 69); s <= (289 - 284); s = s + 1)
                for (felIWk = (529 - 528); felIWk <= (233 - 228); felIWk = felIWk + 1) {
                    if ((a5aiVQS != lrcGwnbPuB) && (a5aiVQS != s) && (lrcGwnbPuB != s) && (a5aiVQS != felIWk) && (lrcGwnbPuB != felIWk) && (s != felIWk)) {
                        if (((weight[a5aiVQS] + weight[lrcGwnbPuB]) == (weight[s] + weight[felIWk])) && ((weight[a5aiVQS] + weight[felIWk]) > (weight[s] + weight[lrcGwnbPuB])) && ((weight[a5aiVQS] + weight[s]) < weight[lrcGwnbPuB])) {
                            yF8ChQ4Z = (260 - 260);
                            jmgAey[a5aiVQS] = 'z';
                            jmgAey[lrcGwnbPuB] = 'q';
                            jmgAey[s] = 's';
                            jmgAey[felIWk] = 'l';
                            for (xJGkRUDoPE = 5; xJGkRUDoPE >= 1; xJGkRUDoPE = xJGkRUDoPE - 1) {
                                if (jmgAey[xJGkRUDoPE] != ' ') {
                                    yF8ChQ4Z = yF8ChQ4Z + 1;
                                    if (yF8ChQ4Z < (637 - 633))
                                        cout << jmgAey[xJGkRUDoPE] << ' ' << weight[xJGkRUDoPE] << endl;
                                    else
                                        cout << jmgAey[xJGkRUDoPE] << ' ' << weight[xJGkRUDoPE];
                                }
                                else
                                    ;
                            };
                        }
                        else
                            ;
                    }
                    else
                        ;
                }
    return (715 - 715);
}

