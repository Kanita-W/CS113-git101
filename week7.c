/*
        บันทึกประวัติการแก้ไขไฟล์

คำศัพท์ต่างที่ควรรู้
- dir       == ดูไฟล์ปัจจุบันแบบละเอียด 
- mkdir     == สร้างไฟล์        
- cd ..     == เปลี่ยนไปเป็น directory ก่อนหน้านี้
- d:        == เปลี่ยนเป็น drive D:

1. ตรวจสอบว่า git ใช้งานได้ไหม
    >> git --version

2. ขั้นตอนนี้ทำทุกครั้งที่มี git repository ใหม่ **
    >> git init

3. การตรวจสอบสถานะของไฟล์
    >> git status ** [ ตรวจตอนที่มีการสร้างไฟล์ใหม่ขึ้นมมา ]
    (ถ้าหน้าจอแสดงผลว่า Untracked files เป็นไฟล์ที่ยังไม่ได้ติดตาม)

4. เพิ่มไฟล์
    >> git add (filename)

5. ตั้งชื่อและอีเมลเพื่อระบุตัวผู้ commit
    >> git config user.name "Your Name"
    >> git config user.email "Yourmail@ku.th"

ุ6. commit file เก็บ Version,snapshot,Checkpoint ขณะนั้น
    >> git commit -m "Add a.txt"

7. ดู Cheackpoint ทั้งหมด ด้วย git log adog
    >> git log --all --decorate --oneline --graph

8. การสร้าง Github acount
    >> git remote add origin https://githuub.com/Kanita-W/git101.git
    >> git push -u origin master

9. git push

    ประโยชน์ของ git

    - การดึงไฟล์
        : กลับมาทั้งหมด
            >> git checkout <commit-id>
        : กลับมาบางไฟล์
            >> git check <commit-id> <filename>
*/
