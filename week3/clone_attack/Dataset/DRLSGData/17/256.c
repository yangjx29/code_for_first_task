void  lwOUR2WdDkEy (char *MeS30vcm9xZ, char *rXCtk48gmaN1, int NA7OD4) {
    char zpReMAToJ [100], SauLzshvtjxe;
    int AsaDMi = (528 - 528);
    int jne5l9;
    {
        jne5l9 = (1465 - 703) - 762;
        for (; NA7OD4 > jne5l9;) {
            rXCtk48gmaN1[jne5l9] = ' ';
            jne5l9 = jne5l9 + 1;
        }
    }
    rXCtk48gmaN1[NA7OD4] = '\0';
    for (jne5l9 = (847 - 847); NA7OD4 > jne5l9; jne5l9 = jne5l9 + 1) {
        SauLzshvtjxe = MeS30vcm9xZ[jne5l9];
        if (!('(' != SauLzshvtjxe))
            zpReMAToJ[AsaDMi++] = jne5l9;
        else {
            if (!(')' != SauLzshvtjxe))
                if ((276 - 276) < AsaDMi)
                    AsaDMi--;
                else
                    rXCtk48gmaN1[jne5l9] = '?';
        }
    }
    for (; (743 - 743) < AsaDMi;) {
        jne5l9 = zpReMAToJ[--AsaDMi];
        rXCtk48gmaN1[jne5l9] = '$';
    }
}

void  pWBzdrCu (char MeS30vcm9xZ [], char rXCtk48gmaN1 []) {
    puts (MeS30vcm9xZ);
    puts (rXCtk48gmaN1);
}

int main () {
    int jne5l9 = (293 - 293);
    char pegpCsz [101], LvFELljg [101], r2bVYS8;
    for (; (r2bVYS8 = getchar ()) != EOF;) {
        if (r2bVYS8 != '\n')
            pegpCsz[jne5l9++] = r2bVYS8;
        else {
            pegpCsz[jne5l9] = '\0';
            lwOUR2WdDkEy (pegpCsz, LvFELljg, jne5l9);
            jne5l9 = (87 - 87);
            pWBzdrCu (pegpCsz, LvFELljg);
        }
    }
    return 0;
}

