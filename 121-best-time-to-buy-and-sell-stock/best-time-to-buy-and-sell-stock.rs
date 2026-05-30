impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
     //create first variable for choosing a single day to buy the stock
        let mut cheapest_price = i32::MAX;
        // create next variable for best profit
        let mut best_profit = 0;
        // use for loop to go through each one to see when is the best time to buy and sell stock
        for price in prices {
            // what is the cheapest price
            let profit = price - cheapest_price;
            // now we are checking to see when we have the most profit (update)
            best_profit = best_profit.max(profit);
            // what is the cheapest price now (update)
            cheapest_price = cheapest_price.min(price);
        } 
//now according to everything, return the best profit
    best_profit
}
}
