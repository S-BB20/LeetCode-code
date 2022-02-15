<h2><a href="https://leetcode.com/problems/shuffle-the-array/"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">1470 </font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">. </font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">배열 섞기</font></font></a></h2><h3>Easy</h3><hr><div><p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">형식의 요소 </font></font><code>nums</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">로 구성된 </font><font style="vertical-align: inherit;">배열 이 제공됩니다 </font><font style="vertical-align: inherit;">.</font></font><code>2n</code><font style="vertical-align: inherit;"></font><code>[x<sub>1</sub>,x<sub>2</sub>,...,x<sub>n</sub>,y<sub>1</sub>,y<sub>2</sub>,...,y<sub>n</sub>]</code><font style="vertical-align: inherit;"></font></p>

<p><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">형식으로 배열을 반환합니다</font></font></em> <font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> .</font></font><code>[x<sub>1</sub>,y<sub>1</sub>,x<sub>2</sub>,y<sub>2</sub>,...,x<sub>n</sub>,y<sub>n</sub>]</code><font style="vertical-align: inherit;"></font></p>

<p>&nbsp;</p>
<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">예 1:</font></font></strong></p>

<pre><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입력:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> nums = [2,5,1,3,4,7], n = 3
 </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">출력:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> [2,3,5,4,1,7] 
 </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">설명:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> x </font></font><sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">1</font></font></sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> =2, x </font></font><sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">2</font></font></sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> =5, x이므로 </font></font><sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">3</font></font></sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> =1, y </font></font><sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">1</font></font></sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> =3, y </font></font><sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">2</font></font></sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> =4, y </font></font><sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">3</font></font></sub><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> =7이면 답은 [2,3,5,4,1,7]입니다.
</font></font></pre>

<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">예 2:</font></font></strong></p>

<pre><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입력:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> 숫자 = [1,2,3,4,4,3,2,1], n = 4
 </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">출력:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> [1,4,2,3,3,2,4,1]
</font></font></pre>

<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">예 3:</font></font></strong></p>

<pre><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">입력:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> 숫자 = [1,1,2,2] , n = 2
 </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">출력:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> [1,2,1,2]
</font></font></pre>

<p>&nbsp;</p>
<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">제약:</font></font></strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 500</code></li>
	<li><code>nums.length == 2n</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10^3</code></li>
</ul></div>