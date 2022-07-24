to start this just simply install any python version for linux or mac osx. 

In my case i have python 3, if you have windows then download the apache httpd server 
then change the directory in your shell or command promt to where the index.html is located at,
then run the command "python3 -m http.server 80" 
then find out what your internal ip address.

on windows the command for that is ifconfig or ipconfig?
And for windows and linux you can simply find it
under network preferences...

This exploit gains intial addrof and fakeobj prims
via a type confusion from @qwertyuiopz?

It's been a while almost 3-4 years via a Date object prototypes
by abusing JIT side effects modelling
probably in dfg or ftl.

Then I proceeded in spraying structures borrowed
and well documented technique and very unstable
which is the primary reason this exploit fails
and only work 4/7 tries by spraying our target object
in this case which is a webassembly memory object

then I fake an webassembly object with a real structure id
of a real webassembly object chosen from the structure spray.

At that very moment, if the spraying suceeded
and doesn't crash, garbage collection doesn't happen
because of the fakeobj is corrupted
and has a valid structure id

then we have a arbitrary r/w prim
but have to perform a cleanup, as a garbage collection
at that point would cause a crash and kill our exploit
process.

The vuln is borrowed from qwerty creds to him
and the exploit process has been used by nearly exploit
developer of webkit.

The dyld shared cache parser code is my own code
and not borrowed originally i had totally not spyware
cache parser working but it was severly outdated
and i couldn't understand it so i wrote my own cache parser.

Firstly its done by finding the vtable of a c++ object
to find the base of the text section, at that point,
the basic hyriarchy on iOS shared cache is a massive
collection of shared processes and dylibs
which is mapped into every process

so one arbitrary leak can leak the base potentially of every process
dyld share cache addresses with the new slide
so by reading into a builtin webcore element
such as div element you can find its vtable
and the read into the start of the vtable to
find the base address
the rest is just me using my arb r/w to parse 
the shared cache from memory through pure jsc/javascript
language.

要开始这个，只需简单地安装适用于 linux 或 mac osx 的任何 python 版本

在我的情况下，Windows上我有 python 3，然后下载 apache httpd server，然后更改目录
在您的 shell 或命令提示符中找到 index.html 所在的位置，然后运行命令“python3 -m http.server 80”，然后找出您的内部 IP 地址。

在 Windows 上，该命令是 ifconfig 还是 ipconfig？对于 windows 和 linux，您可以简单地在网络首选项下找到它...

这个漏洞利用来自@qwertyuiopz 的类型混淆获得了初始 addrof 和 fakeobj prims？
通过滥用可能在 dfg 或 ftl 中的 JIT 副作用建模，通过 Date 对象原型已经有将近 3-4 年的时间了。

然后我继续喷射结构借用和有据可查的技术，并且非常不稳定，这是这个漏洞利用失败的主要原因，
并且在这种情况下通过喷射我们的目标对象（这是一个 webassembly 内存对象）只进行了 4/7 次尝试，
然后我伪造了一个 webassembly 对象从结构喷射中选择的真实 webassembly 对象的真实结构 id。

在那一刻，如果喷射成功并且没有崩溃，则不会发生垃圾收集，因为 fakeobj 已损坏并且具有有效的结构 id

然后我们有一个任意的 r/w prim 但必须执行清理，因为此时的垃圾收集会导致崩溃并终止我们的漏洞利用进程。
vuln是从qwerty creds借给他的，exploit过程已被webkit的几乎exploit开发者使用。
dyld 共享缓存解析器代码是我自己的代码，最初不是借用的，我完全没有间谍软件缓存解析器工作，
但它已经严重过时，我无法理解，所以我编写了自己的缓存解析器。

首先，它通过查找 c++ 对象的 vtable 来查找文本部分的基础来完成，此时，
iOS 共享缓存的基本层次结构是大量共享进程和映射到每个进程的 dylib 集合，
所以一个任意的泄漏可能会泄漏每个进程的基础 dyld 与新幻灯片共享缓存地址

因此，通过读入诸如 div 元素之类的内置 webcore 元素，
您可以找到它的 vtable 并读入 vtable 的开头以找到基地址
剩下的就是我使用我的 arb r/w 通过纯 jsc/javascript 语言从内存中解析共享缓存。