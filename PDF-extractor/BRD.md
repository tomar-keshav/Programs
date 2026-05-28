Business Requirement Document: Ecommerce Website

# Online Apparels shopping Website Business Requirements Document (BRD)


_Ecommerce Website_


_June 2019_


_Version 1.0_


## **1 Document Revisions**

|Date|Version Number|Document Changes|
|---|---|---|
|13/06/2019|1.0|Initial Draft|
||||
||||
||||
||||
||||
||||
||||
||||


## **2 Approvals**

|Role|Name|Title|Signature|Date|
|---|---|---|---|---|
|Project Sponsor|||||
|Business Owner|||||
|Project Manager|||||
|System Architect|||||
|Development Lead|||||
|User Experience Lead|||||
|Quality Lead|||||
|Content Lead|||||



Page 7


## **3 Introduction**

### 3.1 Project Summary

3.1.1 Objectives


    - Enhancing client’s offline business of apparels by transforming it into online ecommerce website.

    - Making online ecommerce platform for buyers to buy apparels from website.

    - Customers/ buyers will be able to search for the various kinds of apparels for e.g. Shirts. Jeans etc
and will be able to order it from website by making online payment of products.

    - Business owner will be able to manage his products by category and prices with different sizes &
colors. Owner will be able to deliver the items to the buyers on shipping address mentioned by the
buyer while placing an order.

    - Customer will be able to track their order shipment.


3.1.2 Background


Website is necessary for simplifying the buying and selling process of apparels. Customers should be able to
search the desired items and can place the order by making online payment of the items. Online website will
help business owner to streamline his offline business of apparels selling and will grow his revenue by making

business online.


3.1.3 Business Drivers


    - Customers are looking for faster delivery of items with good quality and services.

    - Customers/ buyers are going to be a main end user of the website who searches for the good quality
cloths in reasonable price.

    - Admin is the Business Owner who will be responsible for managing the product catalog, categories
and prices and shipping services on website.


Page 4


### 3.2 Project Scope

The scope of the project is to design and develop an online ecommerce website for apparels.
Customers will be able to use the frontend website for searching the apparels and place the
order by making online payment of the order in advance. Web based admin panel/ backend will
help admin user i.e. business owner to manage the products, categories, prices and orders
placed by the customers.


3.2.1 In Scope Functionality


     - Buyer

`o` Login
`o` Registration
`o` Search products
`o` Product listing and search results

`o` Product details with available variations

`o` Add to cart

`o` Add to wishlist

`o` Checkout and Online payment of the orders
`o` Share products on social media
`o` Ratings and review on products

`o` Place the order

`o` Manage address book
`o` My account
`o` Order history
`o` Order tracking

     - Admin


`o` Ability to create/edit/delete products
`o` Manage product categories and sub-categories
`o` Manage product catalog
`o` Manage orders
`o` Manage customers
`o` Manage shipping

`o` Manage payments
`o` Manage roles/ permissions
`o` CMS pages management
`o` Ratings and reviews management
`o` Statistics and reports


3.2.2 Out of Scope Functionality

     - Ordering customized products

     - Real time order tracking

     - Cash on delivery option for buyers



Page 7


### 3.3 User Roles






|Role|Description|
|---|---|
|**Visitors**| <br>Visitors will be able to search for the products using keyword and category search.<br> <br>View product description<br> <br>View product ratings and review<br> <br>Share product on social media<br> <br>Check shipping availability at his PIN code<br> <br>Check variations like color and size<br> <br>Contact support|
|**Buyers**| <br>Customer login, Registration<br> <br>Search products by keyword, categories & sub-categories<br> <br>View product listing with sorting and filter options<br> <br>View product details<br> <br>Add to wishlist<br> <br>Share on social media<br> <br>Check shipping availability by PIN code<br> <br>Shopping cart and checkout<br> <br>Post ratings and reviews<br> <br>My order history<br> <br>My Account settings<br> <br>Contact support|
|**Admin/ Owner**<br> <br>| <br>Manage customers <br> <br>Manage products <br> <br>Manage product categories/ sub-categories <br> <br>Manage orders <br> <br>Manage shipping <br> <br>Manage payments <br> <br>CMS <br> <br>Product Ratings and reviews <br> <br>Statistics and reports <br> <br>Manage roles and permissions|



Page 4


### 3.4 System Perspective

3.4.1 Assumptions

     - Inventory (physical storage/ warehouse) of products are already established.

     - Admin is will manage the products catalog with product codes i.e. SKU.

     - Products with custom size and colors are not going to be sold on website.

     - Price of the products will be in USD.

     - Website will accept the orders from US country only.


3.4.2 Constraints


     - Trainings

     - Additional features or changes in features & functionalities described in document may require
changing the time and costing estimation of the project development.

     - Timeline for enterprise platform updates will impact execution of testing and delivery plan.

     - Budget

     - Schedule (October 31st delivery date)


3.4.3 Risks


     - Lack of training to the employees regarding use of system.


3.4.4 Issues


     - Auditor approval of our new process & system

     - Senior management buy-off on the approach

     - Funding for this initiative

     - Developer resources


Page 7


## **4 Business Process Overview**

 Buyers get registered on website


 Search for the desired product in website using keyword search or categories


 View product listing


 Get on product details page to view detail description, ratings and review for the products


 Add product to wishlist / add to cart for buying the product.


 Proceed for checkout and online payment of the order. Perform any changes in quantities, billing and


shipping address.


 Place order successfully by making online payment of the order through net banking / credit/ debit


card.


 Track order status and receive email notifications for the same.


 Receive order. Contact customer care for any complaints/ queries.


 End of buying process.


Page 7


### 4.1 Proposed Business Process (To-Be)



Page 7


## **5 Business Requirements**

The requirements in this document are prioritized as follows:

|Value|Rating|Description|
|---|---|---|
|1|Critical|Most Urgent and most important requirements.|
|2|High|Urgent but not as critical requirements and important requirements|
|3|Medium|Important but not urgent requirements|
|4|Low|Low Important and not urgent requirements|
|5|Future|Future scope requirements.|


### 5.1 Functional Requirements








|Req#|Priority|Description|Rationale|Impacted<br>Stakeholders|
|---|---|---|---|---|
|FR-001|1|Login| <br>User will be able to login into the website using the email and password.<br> <br>Reset password option for the users to reset the password in case of forgot password.<br> <br>User will also be able to login into website using Facebook and Google account.|Buyer<br>|
|FR-002|1|Registration| <br>Buyers will be able to get registered on website with simple registration form with<br>below details:<br>`o` First name<br>`o` Last name<br>`o` Email id<br>`o` Contact number<br>`o` Password<br>`o` Conform password<br>`o` Accept terms and conditions<br> <br>Email id verification would be mandatory to get login into website.<br> <br>User will receive email verification link on registered email id to verify the email. Once|<br> <br>Buyer|



Page 15


|Req#|Priority|Description|Rationale|Impacted<br>Stakeholders|
|---|---|---|---|---|
||||email id verified successfully, user will be able login into website with email and<br>password||
|FR-003|1|Product<br>Search| <br>Buyers will be able to search the products by keyword, by browsing through<br>category/sub-category, using filters and sorting options.<br> <br>User would be able to search for the products without login into website.|<br>Buyer/ Guest<br>user|
|FR-004|1|Product<br>Listing| <br>Buyers will be able to view the listing of the product with following details:<br>`o` Product title<br>`o` Thumbnail image<br>`o` Price<br>`o` Ratings & reviews<br> <br>By clicking on product title and image, user will be able to navigate on product detail<br>page to view more details of the product.<br> <br>User should be able to view the products listing and details without login.|Buyer/ Guest<br>user|
|FR-005|1|Product<br>details| <br>User would be able to view all product details on this page. Login will not be required<br>to view the product details.<br> <br>User will be able to check the shipping availability by entering PIN code.<br> <br>User would be able to view following details about the product on product detail<br>page:<br>`o` Product title<br>`o` Thumbnail image<br>`o` Product images<br>`o` Product description<br>`o` Price<br>`o` Sizes/ colors<br>`o` Ratings & reviews<br> <br>User will be able to add the product to his shopping cart. User will also be able to add<br>the product to wishlist.|Buyer/ Guest<br>user|


Page 15






|Req#|Priority|Description|Rationale|Impacted<br>Stakeholders|
|---|---|---|---|---|
|||| <br>User will be able to share product on social media.<br> <br>User will not be able to add the product to wishlist without login.||
|FR-006|2|Wishlist| <br>Buyer will need to get registered and login into website to maintain his list of items in<br>wishlist.<br> <br>Buyer will be able to view/ add/delete products added into his wishlist. User will be<br>able to proceed for checkout process of items available in wishlist.|Buyer|
|FR-007|1|Shopping cart| <br>The products can be added into shopping cart from the product detail page.<br> <br>User is required to get register and login to manage the items in his shopping cart.<br> <br>User will be able to add items/remove items/ update quantity of items in shopping<br>cart.<br> <br>User will be able to proceed for checkout of any items/ all items available in shopping<br>cart.<br> <br>User will be able to view item price, sub-total and total price of the items available in<br>shopping cart.|Buyer|
|FR-008|1|Checkout &<br>Payment| <br>Payment and checkout process of the items selected from the shopping cart will be<br>considered for placing the orders.<br> <br>Buyer is required to login into website for checkout and payment.<br> <br>Buyer will required to enter billing and shipping address before checkout and<br>payment.<br> <br>Buyer will be required to select payment method for order payment<br>`o` Credit card/ debit card<br>`o` Net banking<br> <br>Buyer will be able to view the order summary on this page. Order summary will show<br>following details:<br>`o` Item total<br>`o` Sub-total<br>`o` Shipping cost<br>`o` Tax|Buyer|



Page 15


|Req#|Priority|Description|Rationale|Impacted<br>Stakeholders|
|---|---|---|---|---|
||||`o` Order total<br> <br>Buyers will be able to receive email notifications for the orders status update.||
|FR-009|4|Social media<br>sharing| <br>User will be able to share product on social media.<br> <br>Login is not mandatory to share products on social media.|Buyer/ Guest<br>user|
|FR-010|1|My Account| <br>Buyers will be able to manage their following details from account section<br>`o` Profile details : email, phone number<br>`o` Change password<br>`o` Addresses<br> <br>Buyer will be able to access below sections from My account:<br>`o` My Orders<br>`o` MY wishlist<br>`o` shopping cart<br>`o` Ratings and reviews<br>`o` Logout|Buyer|
|FR-011|2|Ratings &<br>Reviews| <br>User will be able to give ratings and review to the items which he has ordered in past/<br>recently.<br> <br>User will be able post rating and review only for the products which he has ordered<br>from the website.<br> <br>Login and registration will be mandatory for the user to post ratings and review.|Buyer|
|FR-012|1|Order History| <br>Buyers will be able to view the orders list i.e. orders placed by the buyer on past.<br> <br>User will be able to view all details about the orders with total amount paid, shipping<br>address, items quantity, price per unit etc.<br> <br>User will be able to reorder the items which are shown in the order details.<br> <br>User will be able to track his current orders from my orders section.|Buyer|
|FR-013|2|Contact| <br>Buyers will be able to contact support team via email regarding any queries/|Buyer, Admin|


Page 15


|Req#|Priority|Description|Rationale|Impacted<br>Stakeholders|
|---|---|---|---|---|
|||Support|complaints by simply posting name, email, contact number and message to the<br>admin.<br> <br>Admin will be able to receive an email regarding complaint details posted by buyer.|user|
|FR-014|1|Login| <br>The admin will be able to login to the admin panel.<br> <br>The admin will be asked to enter the user name and password in the given field.<br> <br>Reset password option for the admin to reset password in case of forgot password.|Admin user/<br>Sub-users|
|FR-015|1|Dashboard| <br>Admin user will be able to view following information on dashboard<br>`o` Total no. of active and inactive registered buyers<br>`o` Total no. of Products uploaded on website<br>`o` Total Revenue: today/ this month|Admin user/<br>Sub-users|
|FR-016|1|Buyers<br>Management| <br>Admin user will be able to view/edit/active/inactive buyers account information from<br>this section.<br> <br>Admin user will be able to view all detail of the buyer’s account like profile details,<br>address, orders, wishlist, items in cart.|Admin user/<br>Sub-users|
|FR-017|1|Orders<br>Management| <br>Admin user will be able to view list of all orders placed by the buyers on website with<br>current status of each order.<br> <br>Admin user will be able to view/edit order details.<br> <br>Admin user will be able to update the status of order placed by the buyer.<br> <br>Status of the orders will be as below:<br>`o` Open<br>`o` Confirmed<br>`o` In process<br>`o` Shipped<br>`o` Delivered<br>`o` Admin user will be responsible for shipment of orders placed by the buyers.<br> <br>Admin user will be able to maintain the below shipment details into system for each|Admin user/<br>Sub-users|


Page 15






|Req#|Priority|Description|Rationale|Impacted<br>Stakeholders|
|---|---|---|---|---|
||||order:<br>`o` Shipping carrier<br>`o` Tracking ID<br>`o` Current status of shipment<br>`o` Delivery location/address<br>`o` Shipping cost||
|FR-018|1|Product<br>categories<br>management| <br>Admin user will be able add/edit/active/inactive product categories and sub-<br>categories from this section.<br> <br>User will be able to add products under these categories & sub-categories from the<br>product management section.|Admin user/<br>Sub-users|
|FR-019|1|Products<br>management| <br>Admin user will be able to Add/ Edit/Active/ Inactive products in catalog from this<br>section.<br> <br>Admin user will also be able to manage following information of the products:<br>`o` Product name<br>`o` Images<br>`o` Description<br>`o` Keywords<br>`o` Variations : color, size|Admin user/<br>Sub-users|
|||Payment<br>Management| <br>Ability for the admin to view/edit payment information i.e. bank account details to<br>receive orders payments from buyers.<br> <br>Admin user will be able to view payment status of each order placed by the buyers.<br> <br>Stripe payment gateway will be used for online payment gateway integration.|Admin user|
|FR-020|3|Ratings &<br>Review| <br>Admin user will be able to approve/ reject ratings and reviews posted by the buyers<br>for products.|Admin user/<br>Sub-users|
|FR-021|2|Statistics &<br>Reports| <br>User will be able to view the following reports in system:<br>`o` Products uploaded:|Admin user/<br>Sub-users|


Page 15










|Req#|Priority|Description|Rationale|Impacted<br>Stakeholders|
|---|---|---|---|---|
||||- <br>Date : From-To<br>- <br>Month<br>- <br>Year<br>`o` Revenue/ total sale<br>- <br>Today<br>- <br>Current week<br>- <br>Date : From-To<br>- <br>Month<br>- <br>Year<br> <br>Admin user will be able to export reports into pdf and excel format.||
|FR-022|2|System users<br>Management| <br>Admin user will be able to create/edit/delete/ active/inactive sub-users to operate<br>the various sectional operations in system|Admin user/<br>Sub-users|
|FR-023|2|Roles<br>Management| <br>Ability to add/edit/delete/active/inactive sub-admin users with role based access|Admin user/<br>Sub-users|
|FR-024|1|CMS<br>Management| <br>Admin user will be able to edit the content for below CMS pages:<br>`o` About us<br>`o` Contact us<br>`o` Privacy policy<br>`o` Terms and conditions|Admin user/<br>Sub-users|
|FR-025|3|Email<br>Management| <br>Admin user will be able to add/edit/delete content for emails to be sent to buyers<br>regarding new product launch, offers, and promotions.|Admin user/<br>Sub-users|
|FR-026|2|Complaints/<br>Feedbacks| <br>Admin user will be able to view queries/ complaints/ feedbacks received from the<br>buyers. Admin will also receive an email regarding the feedback / complaints and<br>queries sent by the buyers.|Admin user/<br>Sub-users|


Page 15


### 5.2 Non-Functional Requirements


|ID|Requirement|
|---|---|
|NFR-001|Scalability: The website repository shall accommodate up to 100 users concurrently.|
|NFR-002|Speed: web pages should not take more than 30 seconds to load in good speed of internet.|
|NFR-003|Reliability: Web pages should not get broken and display page not found error if page is not available.|
|NFR-004|Security: SSL security and encryption for online payments|



Page 15


## **6 Appendices**

### 6.1 List of Acronyms

Not Applicable

### 6.2 Glossary of Terms


Not Applicable

### 6.3 Related Documents


Not Applicable



Page 16


