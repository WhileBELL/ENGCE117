Vim�UnDo� �c1�uCs\z�dܛ�zf��l���1ţ�I��-�   p           '                       d��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             d��     �                   ~�               �                   �               5��                                          �       �                  e       �               ^      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d��     �   n               �         p      #include <string.h>           struct studentNode {�         p      struct studentNode {    char name[20];�         p       char name[ 20 ] ;�         p       char name[ 20 ] ;   	 int age;�         p      
 int age ;�      	   p      
 int age ;   
 char sex;�      	   p       char sex ;�      
   p       char sex ;    float gpa;�      
   p       float gpa ;�         p       float gpa ;    struct studentNode *next;�   	      p       struct studentNode *next ;�   
      p      } ;�         p      class LinkedList {    protected:�         p       protected :�         p      $  struct studentNode *start, **now ;�         o      $  struct studentNode *start, **now ;    public:�         o      	 public :�         o        LinkedList() ;�         o        LinkedList() ;      ~LinkedList();�         o        ~LinkedList() ;�         o        ~LinkedList() ;    1  void InsNode(char n[], int a, char s, float g);�         o      4  void InsNode( char n[], int a, char s, float g ) ;�         o      5  void InsNode( char n[], int a, char s, float g ) ;      void DelNode();�         o        void DelNode() ;�         o        void DelNode() ;      GoNext();�         o        GoNext() ;�         o        GoNext() ;      virtual void ShowNode();�         o        virtual void ShowNode()  ;�         o        virtual void ShowNode()  ;    }; // end class�         o      } ; //end class�         o      LinkedList :: LinkedList () {�         o      LinkedList :: LinkedList () {   	this->start = NULL;�         o      	this -> start = NULL ;�         o      	this -> start = NULL ;   	(this->now) = &(this->start);�         o      	(this->now) = &(this->start) ;�         o      FLinkedList :: ~LinkedList () { printf("\nreturn memery by 1 list."); }�         p      LinkedList :: ~LinkedList () {   (	printf("\nreturn memery by 1 list."); }�          p      )	printf("\nreturn memery by 1 list.") ; }�          q      '	printf("\nreturn memery by 1 list.") ;   }�   !   #   q      @void LinkedList :: InsNode( char n[], int a, char s, float g ) {�   !   $   q      @void LinkedList :: InsNode( char n[], int a, char s, float g ) {   	if ((*this->now) == NULL) {�   "   $   q      	if ( (*this->now) == NULL ){�   "   %   q      	if ( (*this->now) == NULL ){   (		(*this->now) = new struct studentNode;�   #   %   q      )		(*this->now) = new struct studentNode ;�   #   &   q      )		(*this->now) = new struct studentNode ;   		(*this->now)->next = NULL;�   $   &   q      		(*this->now)->next = NULL ;�   $   '   q      		(*this->now)->next = NULL ;    		strcpy((*this->now)->name, n);�   %   '   q      !		strcpy((*this->now)->name, n) ;�   %   (   q      !		strcpy((*this->now)->name, n) ;   		(*this->now)->age = a;�   &   (   q      		(*this->now)->age = a ;�   &   )   q      		(*this->now)->age = a ;   		(*this->now)->sex = s;�   '   )   q      		(*this->now)->sex = s ;�   '   *   q      		(*this->now)->sex = s ;   		(*this->now)->gpa = g;�   (   *   q      		(*this->now)->gpa = g ;�   (   +   q      		(*this->now)->gpa = g ;   		} else {�   )   +   r      	}   	else {�   *   -   r      	else {   		struct studentNode *holder;�   +   -   r      		struct studentNode *holder ;�   +   .   r      		struct studentNode *holder ;   "		holder = new struct studentNode;�   ,   .   r      $		holder = new struct studentNode  ;�   ,   /   r      $		holder = new struct studentNode  ;   		strcpy((holder)->name, n);�   -   /   r      		strcpy((holder)->name, n) ;�   -   0   r      		strcpy((holder)->name, n) ;   		(holder)->age = a;�   .   0   r      		(holder)->age = a ;�   .   1   r      		(holder)->age = a ;   		(holder)->sex = s;�   /   1   r      		(holder)->sex = s ;�   /   2   r      		(holder)->sex = s ;   		(holder)->gpa = g;�   0   2   r      		(holder)->gpa = g ;�   0   3   r      		(holder)->gpa = g ;    		(holder)->next = (*this->now);�   1   3   r      !		(holder)->next = (*this->now) ;�   1   4   r      !		(holder)->next = (*this->now) ;   		(*this->now) = holder;�   2   4   r      		(*this->now) = holder ;�   2   5   r      		(*this->now) = holder ;   	}�   6   8   r      void LinkedList :: DelNode() {�   6   9   r      void LinkedList :: DelNode() {   5	struct studentNode *holder = new struct studentNode;�   7   9   r      6	struct studentNode *holder = new struct studentNode ;�   7   :   r      6	struct studentNode *holder = new struct studentNode ;   	holder = (*this->now)->next;�   8   :   r      	holder = (*this->now)->next ;�   8   ;   r      	holder = (*this->now)->next ;   	(*this->now) = holder;�   9   ;   r      	(*this->now) = holder ;�   <   >   r      =LinkedList :: GoNext() { (this->now) = &(*this->now)->next; }�   <   >   s      LinkedList :: GoNext() {   %	(this->now) = &(*this->now)->next; }�   =   ?   s      &	(this->now) = &(*this->now)->next ; }�   =   ?   t      $	(this->now) = &(*this->now)->next ;   }�   @   B   t      void LinkedList :: ShowNode() {�   @   C   t      void LinkedList :: ShowNode() {   %  	printf("%s ", (*this->now)->name);�   A   C   t      (  	printf( "%s ", (*this->now)->name ) ;�   A   D   t      (  	printf( "%s ", (*this->now)->name ) ;   $  	printf("%d ", (*this->now)->age);�   B   D   t      '  	printf( "%d ", (*this->now)->age ) ;�   B   E   t      '  	printf( "%d ", (*this->now)->age ) ;   $  	printf("%c ", (*this->now)->sex);�   C   E   t      '  	printf( "%c ", (*this->now)->sex ) ;�   C   F   t      '  	printf( "%c ", (*this->now)->sex ) ;   (  	printf("%.2f \n", (*this->now)->gpa);�   D   F   t      +  	printf( "%.2f \n", (*this->now)->gpa ) ;�   G   J   t      #class NewList : public LinkedList {    public:�   H   J   t      	 public :�   I   K   t        GoFirst() ;�   I   L   t        GoFirst() ;      virtual void ShowNode();�   J   L   t        virtual void ShowNode() ;�   J   M   t        virtual void ShowNode() ;    }; // end class�   K   M   t      } ; //end class�   M   O   t      6NewList :: GoFirst() { (this->now) = &(this->start); }�   M   O   u      NewList :: GoFirst() {    	(this->now) = &(this->start); }�   N   P   u      !	(this->now) = &(this->start) ; }�   N   P   v      	(this->now) = &(this->start) ;   }�   Q   S   v      void NewList :: ShowNode() {�   Q   T   v      void NewList :: ShowNode() {   * struct studentNode *holder = this->start;�   R   T   v      + struct studentNode *holder = this->start ;�   R   U   v      + struct studentNode *holder = this->start ;    while (holder != NULL) {�   S   U   v       while( holder != NULL ) {�   S   V   v       while( holder != NULL ) {     	printf("%s ", holder->name);�   T   V   v      "  	printf( "%s ", holder->name ) ;�   T   W   v      "  	printf( "%s ", holder->name ) ;     	holder = holder->next;�   U   W   v        	holder = holder->next ;�   U   X   v        	holder = holder->next ;    } // end while�   V   X   v       }//end while�   V   Y   v       }//end while    printf(" \n");�   W   Y   v       printf( " \n" ) ;�   Z   ]   v      int main() {    LinkedList listA;�   [   ]   v       LinkedList listA ;�   [   ^   v       LinkedList listA ;    NewList listB;�   \   ^   v       NewList listB ;�   \   _   v       NewList listB ;    LinkedList *listC;�   ]   _   v       LinkedList *listC ;�   ]   a   v       LinkedList *listC ;       # listA.InsNode("one", 1, 'A', 1.1);�   _   a   v      & listA.InsNode( "one", 1, 'A', 1.1 ) ;�   _   b   v      & listA.InsNode( "one", 1, 'A', 1.1 ) ;   # listA.InsNode("two", 2, 'B', 2.2);�   `   b   v      & listA.InsNode( "two", 2, 'B', 2.2 ) ;�   `   c   v      & listA.InsNode( "two", 2, 'B', 2.2 ) ;   % listA.InsNode("three", 3, 'C', 3.3);�   a   c   v      ( listA.InsNode( "three", 3, 'C', 3.3 ) ;�   a   d   v      ( listA.InsNode( "three", 3, 'C', 3.3 ) ;    listA.GoNext();�   b   d   v       listA.GoNext() ;�   b   e   v       listA.GoNext() ;    listA.ShowNode();�   c   e   v       listA.ShowNode() ;�   c   g   v       listA.ShowNode() ;       $ listB.InsNode("four", 4, 'D', 4.4);�   e   g   v      ' listB.InsNode( "four", 4, 'D', 4.4 ) ;�   e   h   v      ' listB.InsNode( "four", 4, 'D', 4.4 ) ;   $ listB.InsNode("five", 5, 'E', 5.5);�   f   h   v      ' listB.InsNode( "five", 5, 'E', 5.5 ) ;�   f   i   v      ' listB.InsNode( "five", 5, 'E', 5.5 ) ;   # listB.InsNode("six", 6, 'F', 6.6);�   g   i   v      & listB.InsNode( "six", 6, 'F', 6.6 ) ;�   g   j   v      & listB.InsNode( "six", 6, 'F', 6.6 ) ;    listB.GoNext();�   h   j   v       listB.GoNext() ;�   h   k   v       listB.GoNext() ;    listB.DelNode();�   i   k   v       listB.DelNode() ;�   i   l   v       listB.DelNode() ;    listB.ShowNode();�   j   l   v       listB.ShowNode() ;�   j   n   v       listB.ShowNode() ;        listC = &listA;�   l   o   v       listC = &listA;    listC->GoNext();�   m   o   v       listC->GoNext() ;�   m   p   v       listC->GoNext() ;    listC->ShowNode();�   n   p   v       listC->ShowNode() ;�   n   r   v       listC->ShowNode() ;        listC = &listB;�   p   r   v       listC = &listB ;�   p   s   v       listC = &listB ;    listC->ShowNode();�   q   s   v       listC->ShowNode() ;�   q   u   v       listC->ShowNode() ;       
 return 0;�   s   u   v       return 0 ;�   t   v   v      }//end function�   t              }//end function        5��    t                    V	                    �    t                     J	                     �    t                     H	                     �    s   	                  D	                     �    q                  9	                    �    q                     7	                     �    p                  $	                    �    p                     "	                     �    n                  	                    �    n                     	                     �    m                  �                    �    m                     �                     �    l                  �                    �    j                  �                    �    j                     �                     �    i                  �                    �    i                     �                     �    h                  �                    �    h                     �                     �    g   &               �                    �    g   $                  �                     �    g   "                  �                     �    g                     �                     �    f   '               w                    �    f   %                  u                     �    f   #                  s                     �    f                     _                     �    e   '               O                    �    e   %                  M                     �    e   #                  K                     �    e                     7                     �    c                  &                    �    c                     $                     �    b                                      �    b                                          �    a   (                                    �    a   &                  �                     �    a   $                  �                     �    a                     �                     �    `   &               �                    �    `   $                  �                     �    `   "                  �                     �    `                     �                     �    _   &               �                    �    _   $                  �                     �    _   "                  �                     �    _                     �                     �    ]                  �                    �    ]                     �                     �    \                  r                    �    \                     p                     �    [                  a                    �    [                     _                     �    Z                  M                    �    W                     ;                     �    W                     9                     �    W                     3                     �    V                  *                    �    V                     !                     �    V                                          �    U                                      �    U                                          �    T   "                                   �    T                      �                     �    T                     �                     �    T   
                  �                     �    S                  �                    �    S                     �                     �    S                     �                     �    S                     �                     �    R   +               �                    �    R   )                  �                     �    Q                  �                    �    Q                     �                     �    N                    w                    �    N                     u                     �    M                   W                    �    M   
                  K                     �    K                     6                     �    K                     1                     �    J                    .                    �    J                     ,                     �    I                                      �    I                                          �    H                                          �    G   #                �                    �    D   )                  �                     �    D   '                  �                     �    D   
                  �                     �    C   '               �                    �    C   %                  �                     �    C   #                  �                     �    C   
                  �                     �    B   '               ~                    �    B   %                  |                     �    B   #                  z                     �    B   
                  a                     �    A   (               V                    �    A   &                  T                     �    A   $                  R                     �    A   
                  8                     �    @                  -                    �    @                                           �    =   $                 
                    �    =   "                                       �    <                   �                    �    <                     �                     �    9                     �                     �    8                  �                    �    8                     �                     �    7   6               �                    �    7   4                  �                     �    6                  Z                    �    6                     N                     �    2                  5                    �    2                     3                     �    1   !                                   �    1                                          �    0                  �                    �    0                     �                     �    /                  �                    �    /                     �                     �    .                  �                    �    .                     �                     �    -                  �                    �    -                     �                     �    ,   $               �                    �    ,   !                  �                     �    +                  t                    �    +                     r                     �    *                  U                    �    )                   M                    �    (                  J                    �    (                     H                     �    '                  0                    �    '                     .                     �    &                                      �    &                                          �    %   !               �                    �    %                     �                     �    $                  �                    �    $                     �                     �    #   )               �                    �    #   '                  �                     �    "                  �                    �    "                     �                     �    "                     �                     �    "                     z                     �    !   @               t                    �    !   <                  p                     �    !                     O                     �    !                     F                     �       '                 0                    �       %                  .                     �                                           �                                              �                         �                     �                         �                     �                      �                    �                         �                     �                         �                     �                         �                     �                      �                    �                         �                     �                         �                     �                         �                     �                         �                     �                        ~                    �                         {                     �                      `                    �       
                  ^                     �                      R                    �                         P                     �       4               >                    �       2                  <                     �       0                  :                     �                                              �                                          �                                              �                      �                     �                         �                      �                         �                      �       $                �                     �       "                  �                      �       
                  �                      �                       �                     �    
                     �                      �    	                     �                      �                      t                     �       
                  r                      �                      g                     �       	                  e                      �       
               [                     �                         Y                      �                      P                     �                         N                      �                         L                      �                         I                      �                      =                     �                        &                     �    n                      	                     5�_�                    :       ����                                                                                                                                                                                                                                                                                                                                                             d��     �   9   <   n      <LinkedList ::GoNext() { (this->now) = &(*this->now)->next; }5��    9                     �                     �    :                      �                     5�_�                     ;   '    ����                                                                                                                                                                                                                                                                                                                                                             d��    �   :   =   o      (    (this->now) = &(*this->now)->next; }5��    :   '                 �                     �    ;                      �                     5��