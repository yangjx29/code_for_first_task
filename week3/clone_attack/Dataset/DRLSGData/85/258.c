int main () {
    int zAvnH0Sz, XZF16a8e, LVyfPEZ6Nvl, EwQlX6Yz5of = (755 - 755);
    char xFhklWq [(227 - 127)] [(747 - 727)];
    scanf ("%d", &zAvnH0Sz);
    for (XZF16a8e = (163 - 163); zAvnH0Sz > XZF16a8e; XZF16a8e = XZF16a8e +(578 - 577)) {
        scanf ("%s", xFhklWq[XZF16a8e]);
    }
    for (XZF16a8e = (624 - 624); XZF16a8e < zAvnH0Sz; XZF16a8e = XZF16a8e +1) {
        if (xFhklWq[XZF16a8e][(424 - 424)] >= '0' && '9' >= xFhklWq[XZF16a8e][(464 - 464)]) {
            printf ("no\n");
            continue;
        }
        int DY9WG4u = strlen (xFhklWq[XZF16a8e]);
        EwQlX6Yz5of = (99 - 99);
        {
            LVyfPEZ6Nvl = (55 - 55);
            while (LVyfPEZ6Nvl < DY9WG4u) {
                if ((!('_' != xFhklWq[XZF16a8e][LVyfPEZ6Nvl])) || ((xFhklWq[XZF16a8e][LVyfPEZ6Nvl] >= 'a') && (xFhklWq[XZF16a8e][LVyfPEZ6Nvl] <= 'z')) || ((xFhklWq[XZF16a8e][LVyfPEZ6Nvl] >= 'A') && (xFhklWq[XZF16a8e][LVyfPEZ6Nvl] <= 'Z')) || (xFhklWq[XZF16a8e][LVyfPEZ6Nvl] >= '0') && (xFhklWq[XZF16a8e][LVyfPEZ6Nvl] <= '9')) {
                    EwQlX6Yz5of = EwQlX6Yz5of +1;
                }
                else {
                    printf ("no\n");
                    break;
                }
                if (EwQlX6Yz5of == DY9WG4u) {
                    printf ("yes\n");
                    break;
                }
                LVyfPEZ6Nvl = LVyfPEZ6Nvl +1;
            }
        }
    }
    return (699 - 699);
}

