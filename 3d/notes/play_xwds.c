#include <FPT.h>


<<<<<<< HEAD
int main (int argc, char **argv)
=======
int main ()
>>>>>>> ffe1886d11a2e9bb4cdd04d24adb8f719224baa1
{
  int width,height ;
  char prefix[100], sequence_name[100] ;
  int s,e,i ;
  double f ;
  int q ;

  printf("movie player ... q to quit, any other key to keep playing movie\n") ;

<<<<<<< HEAD
  //printf("enter window width and height ") ;
  //scanf("%d %d",&width,&height) ;
  width = 800; height = 800;
  if(argc < 4) {
    printf("usage: command <prefix name> <start> <end>");
    exit(0);
  }

  //printf("enter prefix name ") ;
  //scanf("%s",prefix) ;
  sprintf(prefix,argv[1]);

  //printf("enter starting integer ") ;
  //scanf("%d",&s) ;
  char **what;
  s = strtol(argv[2], what, 10);

  //printf("enter ending integer ") ;
  //scanf("%d",&e) ;
  e = strtol(argv[3], what, 10);
=======
  printf("enter window width and height ") ;
  scanf("%d %d",&width,&height) ;

  printf("enter prefix name ") ;
  scanf("%s",prefix) ;

  printf("enter starting integer ") ;
  scanf("%d",&s) ;

  printf("enter ending integer ") ;
  scanf("%d",&e) ;
>>>>>>> ffe1886d11a2e9bb4cdd04d24adb8f719224baa1

  /*
  printf("\n") ;
  for (i = s ; i <= e ; i++) {
    sprintf(sequence_name, "%s%04d.xwd", prefix, i) ;
    printf("%s\n",sequence_name) ;
  }
  */


  G_init_graphics(width,height) ;

  while (0 == 0) {

    // run the sequence forward
    for (i = s ; i <= e ; i++) {
      sprintf(sequence_name, "%s%04d.xwd", prefix, i) ;
      G_get_image_from_file(sequence_name,0,0) ;
      q = G_wait_key() ;
      if (q == 'q') goto L ;
    }

    // run the sequence backward
    for (i = e ; i >= s ; i--) {
      sprintf(sequence_name, "%s%04d.xwd", prefix, i) ;
      G_get_image_from_file(sequence_name,0,0) ;
      q = G_wait_key() ;
      if (q == 'q') goto L ;
    }

  }


 L:
  G_close() ;

}
