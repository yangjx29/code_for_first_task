struct   node;
struct   node {
    char Sx9lQgk [LDVX6is4];
    char B7sMStyo58 [LDVX6is4];
    char O0Cri83Z [LDVX6is4];
    char O6fqP9 [LDVX6is4];
    char Ye3MsDAOBXo [LDVX6is4];
    char wMgpChR [LDVX6is4];
    struct   node *OnQ8rYXkpv;
    struct   node *ojcJCiL9ZxtA;
};
char emawL4Cz [LDVX6is4] = "end";

int main () {
    struct   node *A17Sfh;
    A17Sfh = (struct   node *) malloc (sizeof (struct   node));
    A17Sfh->ojcJCiL9ZxtA = NULL;
    for (; (230 - 229);) {
        scanf ("%s", A17Sfh->Sx9lQgk);
        if (!((835 - 835) != strcmp (A17Sfh->Sx9lQgk, emawL4Cz)))
            break;
        scanf ("%s%s%s%s%s", A17Sfh->B7sMStyo58, A17Sfh->O0Cri83Z, A17Sfh->O6fqP9, A17Sfh->Ye3MsDAOBXo, A17Sfh->wMgpChR);
        A17Sfh->OnQ8rYXkpv = (struct   node *) malloc (sizeof (struct   node));
        A17Sfh->OnQ8rYXkpv->ojcJCiL9ZxtA = A17Sfh;
        A17Sfh = A17Sfh->OnQ8rYXkpv;
    }
    A17Sfh = A17Sfh->ojcJCiL9ZxtA;
    free (A17Sfh->OnQ8rYXkpv);
    for (; A17Sfh != NULL;) {
        printf ("%s %s %s %s %s %s\n", A17Sfh->Sx9lQgk, A17Sfh->B7sMStyo58, A17Sfh->O0Cri83Z, A17Sfh->O6fqP9, A17Sfh->Ye3MsDAOBXo, A17Sfh->wMgpChR);
        A17Sfh = A17Sfh->ojcJCiL9ZxtA;
        if (A17Sfh != NULL)
            free (A17Sfh->OnQ8rYXkpv);
    }
    return (519 - 519);
}

