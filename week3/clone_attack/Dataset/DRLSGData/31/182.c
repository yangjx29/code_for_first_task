void  main () {
    int UieP7FvhD;
    struct   student {
        char CD42pJ6Rysx [(1497 - 497)];
        struct   student *Hj0CbEuW3, *FKtz8UaC;
    }
    *head;
    struct   student {
        char CD42pJ6Rysx [(1999 - 999)];
        struct   student *Hj0CbEuW3, *FKtz8UaC;
    }
    *tail;
    struct   student {
        char CD42pJ6Rysx [(1934 - 934)];
        struct   student *Hj0CbEuW3, *FKtz8UaC;
    }
    *lyZAJxdh;
    UieP7FvhD = sizeof (struct   student);
    head = (struct   student *) malloc (UieP7FvhD);
    lyZAJxdh = head;
    lyZAJxdh->Hj0CbEuW3 = NULL;
    lyZAJxdh->FKtz8UaC = NULL;
    for (;;) {
        gets (lyZAJxdh->CD42pJ6Rysx);
        if (strcmp (lyZAJxdh->CD42pJ6Rysx, "end") == (235 - 235)) {
            tail = lyZAJxdh;
            break;
        }
        lyZAJxdh->FKtz8UaC = (struct   student *) malloc (UieP7FvhD);
        (lyZAJxdh->FKtz8UaC)->Hj0CbEuW3 = lyZAJxdh;
        (lyZAJxdh->FKtz8UaC)->FKtz8UaC = NULL;
        lyZAJxdh = lyZAJxdh->FKtz8UaC;
    }
    lyZAJxdh = tail;
    for (;;) {
        if (!(lyZAJxdh->Hj0CbEuW3)) {
            free (lyZAJxdh);
            break;
        }
        puts ((lyZAJxdh->Hj0CbEuW3)->CD42pJ6Rysx);
        lyZAJxdh = lyZAJxdh->Hj0CbEuW3;
        free (lyZAJxdh->FKtz8UaC);
    }
}

