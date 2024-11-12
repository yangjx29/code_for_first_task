char CV9nSDWb (char utuyclEGwDS) {
    if (utuyclEGwDS >= 'A' && 'Z' >= utuyclEGwDS)
        return utuyclEGwDS - 'A' + 'a';
    return utuyclEGwDS;
}

char Z1HAzs (char XNQ7IMi85 [], int la, char lOs69l5IBk [], int FhxqbFs53k1) {
    for (int dJ7xrd0 = 0;
    la > dJ7xrd0 && FhxqbFs53k1 > dJ7xrd0; dJ7xrd0++) {
        XNQ7IMi85[dJ7xrd0] = CV9nSDWb (XNQ7IMi85[dJ7xrd0]);
        lOs69l5IBk[dJ7xrd0] = CV9nSDWb (lOs69l5IBk[dJ7xrd0]);
        if (XNQ7IMi85[dJ7xrd0] != lOs69l5IBk[dJ7xrd0]) {
            if (lOs69l5IBk[dJ7xrd0] > XNQ7IMi85[dJ7xrd0])
                return '<';
            if (XNQ7IMi85[dJ7xrd0] > lOs69l5IBk[dJ7xrd0])
                return '>';
        }
    }
    return '=';
}

int main () {
    int FhxqbFs53k1;
    int la;
    char XNQ7IMi85 [100];
    gets (XNQ7IMi85);
    char lOs69l5IBk [100];
    gets (lOs69l5IBk);
    la = strlen (XNQ7IMi85);
    FhxqbFs53k1 = strlen (lOs69l5IBk);
    printf ("%c", Z1HAzs (XNQ7IMi85, la, lOs69l5IBk, FhxqbFs53k1));
    return 0;
}

