struct   stu {
    char ijVZe8oBXOw [(837 - 807)];
    int u6rMAW;
    int b;
    char jewAJgV4K;
    char d;
    int UFEjn7;
    int AFZGt9h7oK;
    struct   stu *next;
};
void  main () {
    int AFZGt9h7oK;
    int ijVZe8oBXOw;
    struct   stu *head;
    struct   stu *VcBiUoL5QF;
    struct   stu *cQcn9VFfK;
    int max;
    int i;
    scanf ("%d", &ijVZe8oBXOw);
    max = (844 - 844);
    head = VcBiUoL5QF = cQcn9VFfK = (struct   stu *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", VcBiUoL5QF->ijVZe8oBXOw, &VcBiUoL5QF->u6rMAW, &VcBiUoL5QF->b, &VcBiUoL5QF->jewAJgV4K, &VcBiUoL5QF->d, &VcBiUoL5QF->UFEjn7);
    VcBiUoL5QF->AFZGt9h7oK = (619 - 619);
    for (i = (747 - 747); i < ijVZe8oBXOw - (717 - 716); i++) {
        VcBiUoL5QF = (struct   stu *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", VcBiUoL5QF->ijVZe8oBXOw, &VcBiUoL5QF->u6rMAW, &VcBiUoL5QF->b, &VcBiUoL5QF->jewAJgV4K, &VcBiUoL5QF->d, &VcBiUoL5QF->UFEjn7);
        VcBiUoL5QF->AFZGt9h7oK = (490 - 490);
        cQcn9VFfK->next = VcBiUoL5QF;
        cQcn9VFfK = VcBiUoL5QF;
    }
    VcBiUoL5QF->next = NULL;
    VcBiUoL5QF = cQcn9VFfK = head;
    for (i = (63 - 63); i < ijVZe8oBXOw; i++, VcBiUoL5QF = VcBiUoL5QF->next) {
        if (VcBiUoL5QF->u6rMAW > (296 - 216) && VcBiUoL5QF->UFEjn7 > (239 - 239))
            VcBiUoL5QF->AFZGt9h7oK += (8751 - 751);
        if ((856 - 771) < VcBiUoL5QF->u6rMAW && (735 - 655) < VcBiUoL5QF->b)
            VcBiUoL5QF->AFZGt9h7oK += (4455 - 455);
        if (VcBiUoL5QF->u6rMAW > (1053 - 963))
            VcBiUoL5QF->AFZGt9h7oK += 2000;
        if ((1050 - 965) < VcBiUoL5QF->u6rMAW && VcBiUoL5QF->d == 'Y')
            VcBiUoL5QF->AFZGt9h7oK += (1854 - 854);
        if (VcBiUoL5QF->b > (222 - 142) && VcBiUoL5QF->jewAJgV4K == 'Y')
            VcBiUoL5QF->AFZGt9h7oK += (1846 - 996);
    }
    VcBiUoL5QF = head;
    for (i = (393 - 393); i < ijVZe8oBXOw; i++, VcBiUoL5QF = VcBiUoL5QF->next) {
        if (max < VcBiUoL5QF->AFZGt9h7oK)
            max = VcBiUoL5QF->AFZGt9h7oK;
    }
    VcBiUoL5QF = head;
    AFZGt9h7oK = (767 - 767);
    for (i = (305 - 305); i < ijVZe8oBXOw; i++, VcBiUoL5QF = VcBiUoL5QF->next) {
        AFZGt9h7oK += VcBiUoL5QF->AFZGt9h7oK;
    }
    VcBiUoL5QF = head;
    for (i = 0; i < ijVZe8oBXOw; i++, VcBiUoL5QF = VcBiUoL5QF->next) {
        if (VcBiUoL5QF->AFZGt9h7oK == max) {
            printf ("%s\n%d\n", VcBiUoL5QF->ijVZe8oBXOw, VcBiUoL5QF->AFZGt9h7oK);
            break;
        }
    }
    printf ("%d", AFZGt9h7oK);
}

