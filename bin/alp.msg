Str101 n       
ALP: Assembly Language Processor Messages File
Copyright (C) 1995-2000, IBM Corporation
     �   �  ����    f        n       |  /      �        �  !      �        �  %   �       �  0  p   �  �  �  �  e  �  �  �  $  �    v  �  �   =  �  �"  �  �  g$  �  �  )  4   �  H)      �  h)     �  |)  &   �  �)  %   �  �)      �  �)  $   �  *     �  "*  $   M  F*     N  ^*     O  v*  +   P  �*  1   y  �*  +   z  �*  +   {  (+  1   A  Y+  +   B  �+  *   C  �+  0   	  �+  #   
  ,  #     $,       ?,       X,  4   m  �,  &   n  �,  #   o  �,  %   p  �,  "   q  -  &   r  B-      �  b-     �  t-     �  �-      �  �-  !   �  �-     �  �-     �  �-     �  .  4   �  ?.  '   �  f.     �  ~.  3   �  �.  $   �  �.     �  �.  (   �  /  )   �  ?/     �  S/      �  s/  $   �  �/     �  �/     �  �/     �  �/     �  �/     �  �/  5   �  30  -   �  `0  4   �  �0  +   �  �0  *   �  �0  &   �  1  (   �  71      �  W1     �  m1     �  �1  *   �  �1  (   �  �1  %   �   2  4   �  42  %   �  Y2     �  q2     �  �2     �  �2     �  �2  0   �  �2     �  3  0   �  13  .   �  _3     �  |3  1   �  �3  1   �  �3     �  �3  5   �  %4     �  74  5   �  l4  #     �4       �4  9     �4  9     5       ,5       <5       Z5       p5     u  �5     v  �5  &   w  �5  -   x  �5     y  6     z  6     {  06  '   |  W6     }  m6  0   ~  �6       �6  9   �  �6     �  7  $   �  57     �  M7  (   �  u7     �  �7  #   �  �7     �  �7     �  �7  .   �  8  ,   �  A8  %   �  f8     �  y8     �  �8     �  �8  )   �  �8     �  �8  0   �  9  ,   �  G9  /   �  v9     �  �9  3   �  �9     �  �9     �  �9  (   �  :     �  2:     �  5:  (   �  ]:  0   �  �:  %   �  �:  9   �  �:  ,   �  ;  !   �  8;  #   �  [;  !   �  |;     �  �;  +   �  �;  '   �  �;  !   �  <  $   �  )<     �  D<     �  ]<  4   �  �<  $   �  �<     �  �<     �  �<     �  �<     �   =     �  =     �  =     �  +=  (   �  S=     �  `=     �  z=  (   �  �=     �  �=     �  �=  &   �  �=  %   �  >     �  ,>     8  A>  *   9  k>     :  |>     ;  �>     i  �>  8   j  �>  (   k  	?  (   1  1?  $   2  U?  %   �  z?  (   �  �?  %   �  �?  (   �  �?  %   �  @  $   �  8@  5   �  m@  )   �  �@  +   �  �@     �  �@  2   �  	A  (   �  1A  7   �  hA  %   �  �A  &   �  �A  #   �  �A  $   �  �A     ]  B     ^  B     _  2B      `  RB     b  hB  #   c  �B  9   d  �B  0   e  �B  !   f  C     g  )C  "   h  KC  +   i  vC  ,   �  �C  (   �  �C     �  �C     �  �C  "   #  D     �  D     �  7D     �  OD     �  gD      Q  �D  %   �  �D       �D        �D  !     E      }  ,E     ~  ?E  &     eE     �  �E     �  �E     �  �E     �  �E     �  �E      �  F     E  +F     F  IF     G  gF     H  �F     I  �F  !   �  �F     �  �F     �  �F     �  G     �  G     �  6G     �  OG       hG       �G     ALP%04d Licensed Materials - Property of IBM
IBM Assembly Language Processor Version 4.00.008
(C) Copyright IBM Corp., 1995-2000.  All Rights Reserved.
US Government Users Restricted Rights - Use, duplication or disclosure
restricted by GSA ADP Schedule Contract with IBM Corp. ALP: Assembly Language Processor  Ver 4.00.008 Access violation
 %s received, %s is shutting down Assertion failure, %s Assertion failure (%s), at:
  %s(%u) Internal scanner error %s [GroupOptions] File1 [File1Options] [File2 [File2Options]]...
Enter  %s -?  for additional usage information MESSAGE CONTROL OPTIONS                                DEFAULT

 -Mb ........  Control printing of the assembler banner        +Mb
 -Me:num ..... Set number of errors before assembly aborts     -Me:50
 +Mwe[+|-] ... Treat warnings as errors                        -Mwe
 -M:###[+|-] . Switch individual messages on or off by number
 -M:ALL[+|-] . Control all warning and informational messages  -M:ALL-
 -M:I[+|-] ... Control all informational messages              -M:I-
 -M:W[+|-] ... Control all warning messages                    -M:W+
 -M:BLK[+|-] . Messages regarding block structure violations   -M:BLK+
 -M:COD[+|-] . Messages regarding code generation              -M:COD+
 -M:FIL[+|-] . File manipulation messages                      -M:FIL-
 -M:PP[+|-] .. PreProcessor messages                           -M:PP-
 -M:SRC[+|-] . Source file lexical analysis messages           -M:SRC-
 -M:STA[+|-] . Assembly statistics                             -M:STA- FILE CONTROL OPTIONS                                  DEFAULT

 +Fd ....... Produce a Make dependency file                   -Fd  (no .u)
 -Fd:name .. Produce an explicitly named dependency file      sourcename<.EXT>
 +Fl ....... Produce a listing file                           -Fl  (no .lst)
 -Fl:name .. Produce an explicitly named listing file         sourcename<.EXT>
 +Fm ....... Produce a messages file (reroute stdout)         -Fm  (no .msg)
 -Fm:name .. Produce an explicitly named messages file        sourcename<.EXT>
 -Fo ....... Do not produce an object file                    +Fo  (make .obj)
 -Fo:name .. Produce an explicitly named object file          sourcename<.EXT>
 -Fdd:dir .. Directory to store Make depencency file(s)       (empty)
 -Fdi:dir .. Directory to locate include files (same as -I)   (empty)
 -Fdl:dir .. Directory to store listing file(s)               (empty)
 -Fdm:dir .. Directory to store messages files(s)             (empty)
 -Fdo:dir .. Directory to store object file(s)                (empty)
 -Fds:dir .. Directory to locate source file(s)               (empty)
 -Fed:ext .. Sets default dependency file extension  <.EXT>   -Fed:.u
 -Fei:ext .. Sets default include file extension  <.EXT>      -Fei:.inc
 -Fel:ext .. Sets default listing file extension  <.EXT>      -Fel:.lst
 -Fem:ext .. Sets default messages file extension <.EXT>      -Fem:.msg
 -Feo:ext .. Sets default object file extension   <.EXT>      -Feo:.obj
 -Fes:ext .. Sets default source file extension   <.EXT>      -Fes:.asm
 -Fed ...... No automatic append of dependency file extension +Fed
 -Fei ...... No automatic append of include file extension    +Fei
 -Fel ...... No automatic append of listing file extension    +Fel
 -Fem ...... No automatic append of messages file extension   +Fem
 -Feo ...... No automatic append of object file extension     +Feo
 -Fes ...... No automatic append of source file extension     +Fes LISTING CONTROL OPTIONS
 +Lm ....... List macro expansions     -Lr ....... No Ruler at top of page
 +Lc ....... List false conditionals   -Ld ....... Don't show .LIST dirs
 -Lf ....... Don't use formfeeds       -Li ....... Don't show INCLUDE blocks
 +Ls ....... Symbol table in listing   +Lp:<passes>Listing on specific passes
 -Lt1:string Listing title             -Lt2:string Listing subtitle
 -Llp:num .. Length of page (66)       -Lwp:num .. Width of page (132)
 -Lml:num .. Left margin (8)           -Lmr:num .. Right margin (8)
 -Lmt:num .. Top margin (before title) -Lmm:num .. Middle margin (after title)
 -Lmb:num .. Bottom margin (4)         -Lwt:num .. Tab width (8)
 -Le ....... No Error/Warn/Info msgs

 -Lo:xxx... List Column Order, where x is one each of X,Y,Z,L,M,I,C,F,O,G,D,S
            in any order.  See "-Lc?" for meaning of column abbreviations.

 There are additional listing options that control the characteristics of
 each column:  Margins, Width, Truncation, Display or Non-Display.
 For assistance with column options enter "-Lc?" OBJECT CONTROL OPTIONS                                 DEFAULT

 +Od[:type].... Line number and Symbolic debug info in .obj   -Od
 +Odl[:type]... Line numbering information in .obj file       -Odl
 +Ods[:type]... Symbolic debug information in .obj file       -Ods
 +Oug ......... Convert global symbol names to uppercase      -Oug
 +Ous ......... Convert group and segment names to uppercase  -Ous

The optional <type> field may be used to explicitly set the format of the
generated debugging information.  Valid values are as follows:

    IBM32 - IBM 32-bit "HLL" format (default)
    MS16  - Microsoft 16-bit "CodeView" format SOURCE CONTROL OPTIONS                                 DEFAULT

 -Sc ........ Set case sensitivity for all identifiers        +Sc   (A != a)
 +Sck ....... Set case sensitivity for keywords               -Sck  (A == a)
 -Scs ....... Set case sensitivity for symbol names           +Scs  (A != a)
 +Sk ........ Allow reserved words to be used as labels       -Sk
 +Sfs ....... Forward-referenced JMPs default to SHORT        -Srs (NEAR)
 +Sme ....... Enable MASM 6.00 mmmW/mmmD extended mnemonics   -Sme
 -Sv:<id> ... Set Version behavior (ALP, M510, M600)          -Sv:M510 BASE OPTIONS

 -D:sym[=val] Define a symbol accessible during assembly
 -I:paths ... INCLUDE directive search path[s]
 -Fxx ....... File Control Options;    -F? for assistance
 -Lxx ....... Listing Control Options; -L? for assistance
 -Mxx ....... Message Control Options; -M? for assistance
 -Oxx ....... Object Control Options;  -O? for assistance
 -Sxx ....... Source Control Options;  -S? for assistance LISTING COLUMN CONTROL OPTIONS

These options have the form "-LcXY", where "X" is a general category,
and "Y" designates a specific column to which the setting applies.

X - General Category                Y - Specific Column
--------------------------------    -----------------------------------------
M = Left Margin for column Y        X - Cumulative listing line number (Xref)
T = Truncate data for Y if > Width  Y - Individual source file line number
W = Width of column Y               Z - Macro expansion line number
                                    D - Macro definition line number
The X field may be empty, in which  L - Macro expansion indentation level "-->"
case Y controls whether or not a    M - Macro expansion nesting level
column appears in the listing file: I - Include file nesting level
----------------------------------  C - Conditional assembly nesting level
+LcY or -LcY:ON  - displayed        F - True or False conditional flag (+-)
-LcY or -LcY:OFF - not displayed    O - Offset value within current segment
-LcY:ZBLANK or Z - blank if zero    G - Generated machine code data
-LcY:BLANK or B  - takes up space,  S - Source line data
 but value or data is not printed -Lo:xxxxxxxxxxxx must be one each of "XYZLMICFOGDS" Invalid or missing include path Invalid option "%s" Option "%s" not valid in global scope Option "%s" not valid in local scope Invalid argument in option "%s" Expecting ":" or "=" in option "%s" Invalid message number Invalid keyword "%s" in option "%s" Memory allocation error Too many error messages Error opening message output file "%s"; %s Input and message output filenames are identical Error opening listing output file "%s"; %s Error writing listing output file "%s"; %s Input and listing output filenames are identical Error creating object output file "%s"; %s Error writing object output file "%s"; %s Input and object output filenames are identical Error opening source file "%s"; %s Error reading source file "%s"; %s Circular text substitution Internal buffer overflow Input and dependency output filenames are identical Unexpected character %s in identifier Unexpected character %s in keyword Error opening response file "%s"; %s Invalid filename in "@" directive Unexpected character or terminator %s Numeric constant is invalid; %s Can't %s %s %s %s Overflow or division by zero Can't take offset of expression Expecting relocatable expression Expecting primary expression Expecting "]" Expecting ")" Forward reference needs segment override or FAR PTR Illegal operation on relocatable value Illegal type expression Operands must be relative to same segment or group Illegal digit(s) for current .RADIX Value cannot be negative Expression cannot be forward-referenced Expression does not have an operand size Record tag expected Numeric constant is invalid; %s Expression must be a constant value Undefined symbol "%s" Expecting "," or ")" Expecting "(" Expecting variable name Expecting "," or "%c" Register-indirect expression illegal in this context Expression must have structure or union type Right operand is not a member of structure or union Invalid identifier type for this operation Expression type not valid in this context Label must be followed by a directive Expecting label, directive, or mnemonic Can't be preceded by data label Address size mismatch Invalid register expression Can't use this register with scale factor Illegal target of self relative pointer Invalid mnemonic/operand combination Register combination invalid with %d-bit expression Scaling factor must be 1, 2, 4, or 8 Invalid use of register Multiple base registers Multiple index registers Multiple scaling factors Near target cannot be in different code segment Need size for operand Cannot establish near target without ASSUME CS: Code generation outside of segment boundaries Target is out of range by %s Selected processor does not support this operand Can't access data, no ASSUME or segment override Too many operands Segment address size not supported on this processor Register expected Selected processor does not support this instruction Cannot change expression word size Filename expected Floating-point initializer illegal with integer variable Integer initializer illegal with floating-point variable Expression has no effect String is empty Symbol "%s" was never defined Value not addressable Segment size exceeds 64K limit Argument expected Can't override array with single item .RADIX value must be one of: 2, 8, 10, or 16 Can't nest initializers Colon expected Expecting "<" or "{" Initializer too long or incorrect type Invalid ALIGN setting Previous definition prevents external attribute Syntax error; unexpected token Previous definition prevents change in global visibility "%s" must be a segment name Label outside of segment boundaries Directive must be named Must specify all columns in .LIST ORDER Listing control stack is empty Processor mnemonic used as a label Misplaced ENDP; no open PROC No closing bracket Data allocation outside of segment boundaries Operation illegal within structure or union Expression is not a segment or group ON or OFF expected ON, OFF, or BLANK expected Phase error between passes Symbol already defined as different type PROC name mismatch Symbol redeclared relative to different segment Attribute mismatch during reopen of segment No segment, structure, or union opened as "%s" Identifier expected Reserved symbol "%s" cannot be created or modified Symbol redefinition error Too many initializers Qualified type or type keyword expected Unexpected text in statement %s Symbol redefinition has different value Directive illegal outside of segment boundaries Alignment value must be a power of 2 Alignment value not valid with current segment alignment Redefinition has different number of fields Redefinition has different value Too many bits in record definition Record tag or fieldname expected Value is out of range Mismatch of segment address sizes in group Segment already a member of group "%s" Directive requires use of .MODEL PROC must immediately precede LOCAL Operand has incorrect size Mismatch in %s attribute Name collision caused by promotion from inner scope Cannot determine calling convention Argument expected EXITM outside of macro Comma expected Extra data on line Filename expected %s%s Identifier expected Reserved macro "%s" cannot be redefined Missing ENDM %s without matching IFxxx Reserved symbol "%s" cannot be modified Symbol "%s" already defined <Text-Item> expected Invalid character in numeric constant Illegal digit(s) for specified radix Expecting ">" Unterminated COMMENT Control character illegal in this context No closing quote Unexpected end of file Unexpected terminator Offset operator applied to register-indirect expression Invalid type expression; cannot convert Type conversion operation has no effect Error closing listing file "%s"; %s Error deleting listing file "%s"; %s Assuming NEAR distance for operand size Can't ASSUME CS to a grouped segment Operand size does not match instruction [Constant] is immediate in MASM mode Access to data through a code label Selected processor does not support this instruction Only storing NEAR portion of FAR pointer Operand size inferred from immediate value Operand size mismatch Truncation of significant bits in immediate value Assuming segment width for operand size Can't ASSUME CS to different segment or group; ignored Invalid mnemonic/operand combination No size for operand, assuming default Error closing object file "%s"; %s Error deleting object file "%s"; %s Missing END Unterminated PROC Unterminated segment "%s" Unterminated structure or union Address size mismatch Processor mnemonic used as a label Alignment value not valid with current segment alignment Symbol redeclared relative to different segment Label outside segment boundaries Identifier expected Attribute respecification ignored Mismatch of segment address sizes in group Attribute mismatch during reopen of segment Identifier expected, condition is false Extra data on line Expecting ">" Expression expected, zero assumed Illegal character Number of Errors   : %d Number of Warnings : %d Number of Symbols  : %d Opened message output file "%s" Operand is declared relative to "%s" Assembler is on source pass %d Closed listing output file "%s" Deleted listing output file "%s" Opened listing output file "%s" Address size is %s No size for operand, assuming default Instruction padded with NOP(s) Operand size is %u Segment override has no effect Generated ASSUME CS:%s Closed object output file "%s" Deleted object output file "%s" Opened object output file "%s" Assembly terminated by .ABORT Address size assumed to be %s Structure redefinition: "%s" Declaration sets %s = %s %s outside of segment boundaries Begin skipping tokens Finished skipping tokens Closed source file "%s" Opened source file "%s" Macro redefinition: "%s" Opened INCLUDE file "%s" Closed INCLUDE file "%s" Closed response file "%s" Opened response file "%s" 